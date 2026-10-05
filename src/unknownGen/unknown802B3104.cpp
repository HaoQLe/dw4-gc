#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B3234();
extern void *lbl_80534550;
}
extern "C" {
void *fn_802B3104(){
 if(!lbl_80534550 || !(reinterpret_cast<unsigned int *>(lbl_80534550)[0x24/4]&4)) fn_802B3234();
 return lbl_80534550;
}
}
#pragma pop
