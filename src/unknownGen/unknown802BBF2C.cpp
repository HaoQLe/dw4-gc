#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BC110();
extern void *lbl_80534830;
}
extern "C" {
void *fn_802BBF2C(){
 if(!lbl_80534830 || !(reinterpret_cast<unsigned int *>(lbl_80534830)[0x24/4]&4)) fn_802BC110();
 return lbl_80534830;
}
}
#pragma pop
