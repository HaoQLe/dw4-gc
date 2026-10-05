#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C3DE8();
extern void *lbl_80534B88;
}
extern "C" {
void *fn_802C3C4C(){
 if(!lbl_80534B88 || !(reinterpret_cast<unsigned int *>(lbl_80534B88)[0x24/4]&4)) fn_802C3DE8();
 return lbl_80534B88;
}
}
#pragma pop
