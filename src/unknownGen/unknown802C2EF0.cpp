#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C3114();
extern void *lbl_80534B48;
}
extern "C" {
void *beNumberCtrlInfoRam_getMeta(){
 if(!lbl_80534B48 || !(reinterpret_cast<unsigned int *>(lbl_80534B48)[0x24/4]&4)) fn_802C3114();
 return lbl_80534B48;
}
}
#pragma pop
