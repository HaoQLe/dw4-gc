#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CAA00();
extern void *lbl_80534EA0;
}
extern "C" {
void *fn_802CA918(){
 if(!lbl_80534EA0 || !(reinterpret_cast<unsigned int *>(lbl_80534EA0)[0x24/4]&4)) fn_802CAA00();
 return lbl_80534EA0;
}
}
#pragma pop
