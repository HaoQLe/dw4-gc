#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B48F4();
extern void *lbl_80534604;
}
extern "C" {
void *fn_802B4834(){
 if(!lbl_80534604 || !(reinterpret_cast<unsigned int *>(lbl_80534604)[0x24/4]&4)) fn_802B48F4();
 return lbl_80534604;
}
}
#pragma pop
