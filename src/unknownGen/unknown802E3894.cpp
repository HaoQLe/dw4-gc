#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E38E0();
extern void *lbl_805356F4;
}
extern "C" {
void *fn_802E3894(){
 if(!lbl_805356F4 || !(reinterpret_cast<unsigned int *>(lbl_805356F4)[0x24/4]&4)) fn_802E38E0();
 return lbl_805356F4;
}
}
#pragma pop
