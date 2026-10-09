#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B5FB4();
extern void *lbl_80534660;
}
extern "C" {
void *beTextureCtrlInfoList_getMeta(){
 if(!lbl_80534660 || !(reinterpret_cast<unsigned int *>(lbl_80534660)[0x24/4]&4)) fn_802B5FB4();
 return lbl_80534660;
}
}
#pragma pop
