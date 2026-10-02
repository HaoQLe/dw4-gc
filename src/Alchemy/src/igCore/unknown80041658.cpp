#include <igGap.h>

// Synthetic storage view; field meanings remain unknown.
struct Unknown80041658 {
    unsigned char unknown00[8];
    Gap::igInt unknown08;
    Gap::igInt unknown0C;
};
extern "C" {
    extern void *lbl_80561D3C;
    void fn_8004155C(void *, Gap::igInt, Gap::igInt);
}

extern "C" void *fn_80041658(){ return lbl_80561D3C; }
extern "C" void fn_80041660(Unknown80041658 *object, Gap::igInt count, Gap::igInt width){
    Gap::igInt previousCount = object->unknown0C;
    Gap::igInt capacity = previousCount > 4 ? previousCount : 4;
    while(capacity < count){
        if(capacity < 0x400) capacity *= 2;
        else capacity += 0x400;
    }
    fn_8004155C(object, capacity, width);
    object->unknown08 = count;
}
