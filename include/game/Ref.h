// Reference counting for Alchemy objects, as the game code uses it.
#ifndef GAME_REF_H
#define GAME_REF_H
#include <meta/igObject.h>

extern "C" void fn_80066E1C(Meta::igObject *object);   // frees an object whose reference count reached zero

// The low 23 bits of _refCount count references.
static inline void addRef(Meta::igObject *object) { object->_refCount++; }
static inline void release(Meta::igObject *object)
{
    object->_refCount--;
    if ((object->_refCount & 0x7FFFFF) == 0) fn_80066E1C(object);
}

// A local reference to a T, released when it goes out of scope. The original code has one out-of-line
// destructor per held type, each kept where it was first emitted, so this is modelled as a template;
// the name Ref is ours.
template <class T> class Ref {
public:
    enum Adopt { adopt };
    T *_object;
    Ref(T *object) : _object(object) { if (object) addRef(object); }
    Ref(T *object, Adopt) : _object(object) {}   // takes over a reference already counted
    ~Ref();
    operator T *() const { return _object; }
    T *operator->() const { return _object; }
};
// A file providing an instantiation's out-of-line copy defines GAME_REF_OUT_OF_LINE before including this.
#ifdef GAME_REF_OUT_OF_LINE
#define GAME_REF_INLINE
#else
#define GAME_REF_INLINE inline
#endif
template <class T> GAME_REF_INLINE Ref<T>::~Ref() { if (_object) release(_object); }

#endif
