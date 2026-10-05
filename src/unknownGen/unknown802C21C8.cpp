#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C2394();
extern void *lbl_80534AAC;
}
extern "C" {
void *fn_802C21C8(){
 if(!lbl_80534AAC || !(reinterpret_cast<unsigned int *>(lbl_80534AAC)[0x24/4]&4)) fn_802C2394();
 return lbl_80534AAC;
}
}
#pragma pop
