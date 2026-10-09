#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C890C();
extern void *lbl_80534DEC;
}
extern "C" {
void *beModelCtrlInfoList_getMeta(){
 if(!lbl_80534DEC || !(reinterpret_cast<unsigned int *>(lbl_80534DEC)[0x24/4]&4)) fn_802C890C();
 return lbl_80534DEC;
}
}
#pragma pop
