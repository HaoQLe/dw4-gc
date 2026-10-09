#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BCC00();
extern void *lbl_80534864;
}
extern "C" {
void *beSvPlatDataPS2_getMeta(){
 if(!lbl_80534864 || !(reinterpret_cast<unsigned int *>(lbl_80534864)[0x24/4]&4)) fn_802BCC00();
 return lbl_80534864;
}
}
#pragma pop
