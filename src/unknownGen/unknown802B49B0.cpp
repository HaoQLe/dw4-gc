#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B4A88();
extern void *lbl_80534608;
}
extern "C" {
void *fn_802B49B0(){
 if(!lbl_80534608 || !(reinterpret_cast<unsigned int *>(lbl_80534608)[0x24/4]&4)) fn_802B4A88();
 return lbl_80534608;
}
}
#pragma pop
