#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C822C();
extern void *lbl_80534DA0;
}
extern "C" {
void *fn_802C80D0(){
 if(!lbl_80534DA0 || !(reinterpret_cast<unsigned int *>(lbl_80534DA0)[0x24/4]&4)) fn_802C822C();
 return lbl_80534DA0;
}
}
#pragma pop
