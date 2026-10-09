#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C9948();
extern void *lbl_80534E20;
}
extern "C" {
void *beModelCtrlInfoDataHit_getMeta(){
 if(!lbl_80534E20 || !(reinterpret_cast<unsigned int *>(lbl_80534E20)[0x24/4]&4)) fn_802C9948();
 return lbl_80534E20;
}
}
#pragma pop
