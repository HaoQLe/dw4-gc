#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B6254();
extern void *lbl_80534664;
}
extern "C" {
void *fn_802B6070(){
 if(!lbl_80534664 || !(reinterpret_cast<unsigned int *>(lbl_80534664)[0x24/4]&4)) fn_802B6254();
 return lbl_80534664;
}
}
#pragma pop
