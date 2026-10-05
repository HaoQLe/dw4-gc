#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B2428();
extern void *lbl_80534498;
}
extern "C" {
void *fn_802B1AFC(){
 if(!lbl_80534498 || !(reinterpret_cast<unsigned int *>(lbl_80534498)[0x24/4]&4)) fn_802B2428();
 return lbl_80534498;
}
}
#pragma pop
