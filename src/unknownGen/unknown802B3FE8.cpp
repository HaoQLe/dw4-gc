#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B40A8();
extern void *lbl_80534578;
}
extern "C" {
void *fn_802B3FE8(){
 if(!lbl_80534578 || !(reinterpret_cast<unsigned int *>(lbl_80534578)[0x24/4]&4)) fn_802B40A8();
 return lbl_80534578;
}
}
#pragma pop
