#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C9F68();
extern void *lbl_80534E60;
}
extern "C" {
void *fn_802C9E1C(){
 if(!lbl_80534E60 || !(reinterpret_cast<unsigned int *>(lbl_80534E60)[0x24/4]&4)) fn_802C9F68();
 return lbl_80534E60;
}
}
#pragma pop
