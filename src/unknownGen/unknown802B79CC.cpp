#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B7BB0();
extern void *lbl_80534714;
}
extern "C" {
void *beSwitchCtrlInfo_getMeta(){
 if(!lbl_80534714 || !(reinterpret_cast<unsigned int *>(lbl_80534714)[0x24/4]&4)) fn_802B7BB0();
 return lbl_80534714;
}
}
#pragma pop
