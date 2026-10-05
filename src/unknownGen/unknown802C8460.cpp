#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C8520();
extern void *lbl_80534DC0;
}
extern "C" {
void *fn_802C8460(){
 if(!lbl_80534DC0 || !(reinterpret_cast<unsigned int *>(lbl_80534DC0)[0x24/4]&4)) fn_802C8520();
 return lbl_80534DC0;
}
}
#pragma pop
