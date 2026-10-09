// Alchemy object lists (igDataList: _count, _capacity, _data), as the game code uses them.
#ifndef GAME_LIST_H
#define GAME_LIST_H
#include <meta/igDataList.h>
#include <meta/igObjectList.h>
#include <game/Ref.h>

extern "C" {
void fn_80069128(void *list, void *object);   // appends an object (adds a reference)
void fn_80041C10(void *list, int index);      // removes element index, shifting later ones down
}

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

#endif
