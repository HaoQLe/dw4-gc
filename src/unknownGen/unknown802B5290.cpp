#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B558C();
extern void *lbl_80534628;
}
extern "C" {
void *fn_802B5290(){
 if(!lbl_80534628 || !(reinterpret_cast<unsigned int *>(lbl_80534628)[0x24/4]&4)) fn_802B558C();
 return lbl_80534628;
}
}
#pragma pop
