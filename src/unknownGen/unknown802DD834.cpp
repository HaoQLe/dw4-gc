#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DD8F4();
extern void *lbl_80535480;
}
extern "C" {
void *fn_802DD834(){
 if(!lbl_80535480 || !(reinterpret_cast<unsigned int *>(lbl_80535480)[0x24/4]&4)) fn_802DD8F4();
 return lbl_80535480;
}
}
#pragma pop
