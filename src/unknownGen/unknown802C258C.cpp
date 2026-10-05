#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C264C();
extern void *lbl_80534AC4;
}
extern "C" {
void *fn_802C258C(){
 if(!lbl_80534AC4 || !(reinterpret_cast<unsigned int *>(lbl_80534AC4)[0x24/4]&4)) fn_802C264C();
 return lbl_80534AC4;
}
}
#pragma pop
