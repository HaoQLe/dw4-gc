// Alchemy object lists (igDataList: _count, _capacity, _data), as the game code uses them.
#ifndef GAME_LIST_H
#define GAME_LIST_H
#include <meta/igDataList.h>
#include <meta/igObjectList.h>
#include <game/Ref.h>

extern "C" {
void fn_80069128(void *list, void *object);   // appends an object (adds a reference)
void fn_80041C10(void *list, int index);      // removes element index, shifting later ones down
void fn_8004155C(void *list, int capacity, int elementSize);   // sets the capacity
void fn_80041660(void *list, int count, int elementSize);      // grows the storage to count elements
}

// The result of removing an object from a list (fn_800692E0); its meaning is unknown. It is returned through
// a hidden pointer, as for a class with a copy constructor.
struct ListRemoval {
    int unknown00;
    inline ListRemoval(const ListRemoval &other) : unknown00(other.unknown00) {}
};
extern "C" ListRemoval fn_800692E0(void *list, void *object, int);   // removes an object (releases it)

// Element i of a list.
template <class T> static inline T *item(Meta::igDataList *list, int i) { return static_cast<T **>(list->_data)[i]; }

// Sets the element count, clearing the slots beyond it.
static inline void setCount(Meta::igDataList *list, int newCount)
{
    int count = list->_count;
    for (int i = newCount; i < count; i++) static_cast<Meta::igObject **>(list->_data)[i] = 0;
    list->_count = newCount;
}

// Releases every element and empties the list.
static inline void removeAll(Meta::igObjectList *list)
{
    int count = list->_count;
    for (int i = 0; i < count; i++) {
        Meta::igObject *object = item<Meta::igObject>(list, i);
        if (object) release(object);
    }
    setCount(list, 0);
}

// igIntList's inline append (a member function, as in Alchemy's own header), growing the storage when full.
struct IntListAppend : Meta::igDataList {
    inline void append(const int &value)
    {
        int count = _count;
        if (count < _capacity) _count = count + 1;
        else fn_80041660(this, count + 1, 4);
        static_cast<int *>(_data)[count] = value;
    }
};
static inline void appendInt(Meta::igDataList *list, const int &value) { static_cast<IntListAppend *>(list)->append(value); }

// Shortens a list of plain values to newCount elements (nothing to release or clear).
static inline void truncate(Meta::igDataList *list, int newCount)
{
    if (list->_count > newCount) list->_count = newCount;
}

#endif
