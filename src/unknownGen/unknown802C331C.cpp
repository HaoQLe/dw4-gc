#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C33DC();
extern void *lbl_80534B64;
}
extern "C" {
void *fn_802C331C(){
 if(!lbl_80534B64 || !(reinterpret_cast<unsigned int *>(lbl_80534B64)[0x24/4]&4)) fn_802C33DC();
 return lbl_80534B64;
}
}
#pragma pop
