#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D8040();
extern void *lbl_80563400;
}
extern "C" {
void *igGamecubePointSpriteExt_getMeta(){
 if(!lbl_80563400 || !(reinterpret_cast<unsigned int *>(lbl_80563400)[0x24/4]&4)) fn_800D8040();
 return lbl_80563400;
}
}
#pragma pop
