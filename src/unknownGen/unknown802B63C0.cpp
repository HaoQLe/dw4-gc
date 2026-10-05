#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B64F0();
extern void *lbl_80534670;
}
extern "C" {
void *fn_802B63C0(){
 if(!lbl_80534670 || !(reinterpret_cast<unsigned int *>(lbl_80534670)[0x24/4]&4)) fn_802B64F0();
 return lbl_80534670;
}
}
#pragma pop
