#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BC864();
extern void *lbl_80534858;
}
extern "C" {
void *fn_802BC7D0(){
 if(!lbl_80534858 || !(reinterpret_cast<unsigned int *>(lbl_80534858)[0x24/4]&4)) fn_802BC864();
 return lbl_80534858;
}
}
#pragma pop
