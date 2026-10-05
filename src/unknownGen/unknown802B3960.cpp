#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B3A20();
extern void *lbl_80534564;
}
extern "C" {
void *fn_802B3960(){
 if(!lbl_80534564 || !(reinterpret_cast<unsigned int *>(lbl_80534564)[0x24/4]&4)) fn_802B3A20();
 return lbl_80534564;
}
}
#pragma pop
