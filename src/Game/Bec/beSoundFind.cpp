// Gap::Bec::beSound: the lookup of a sound by name.
#include "beSound.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// The index of the data of a sound info with a name, or -1.
int fn_80315C94(beSound *, beBaseInfoRam *ram, const char *name)
{
    beBaseInfoDataList *list = ram->_parentInfo->_dataList;
    int count = list->_count;
    for (int i = 0; i < count; i++) {
        if (strcmp(name, nameOf(item<igNamedObject>(list, i))) == 0) return i;
    }
    return -1;
}

}
