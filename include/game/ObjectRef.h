// Reference counting for Alchemy objects, as the game code uses it.
#ifndef GAME_OBJECTREF_H
#define GAME_OBJECTREF_H
#include <meta/igObject.h>

extern "C" void fn_80066E1C(Meta::igObject *object);   // frees an object whose reference count reached zero

// The low 23 bits of _refCount count references.
static inline void addRef(Meta::igObject *object) { object->_refCount++; }
static inline void release(Meta::igObject *object)
{
    object->_refCount--;
    if ((object->_refCount & 0x7FFFFF) == 0) fn_80066E1C(object);
}

// A local reference: adds a reference when constructed and releases it when it goes out of scope.
// Its out-of-line destructor is ObjectRef.cpp's.
class ObjectRef {
public:
    Meta::igObject *_object;
    ObjectRef(Meta::igObject *object) : _object(object) { if (object) addRef(object); }
    ~ObjectRef();
};
#ifndef GAME_OBJECTREF_OUT_OF_LINE
inline ObjectRef::~ObjectRef() { if (_object) release(_object); }
#endif

// A local reference taking over one already counted (for example a newly created object); releases it
// when it goes out of scope.
class AdoptedRef {
public:
    Meta::igObject *_object;
    AdoptedRef(Meta::igObject *object) : _object(object) {}
    ~AdoptedRef() { if (_object) release(_object); }
};

#endif
