#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C2D78();
extern void *lbl_80534B38;
}
extern "C" {
void *fn_802C2CE4(){
 if(!lbl_80534B38 || !(reinterpret_cast<unsigned int *>(lbl_80534B38)[0x24/4]&4)) fn_802C2D78();
 return lbl_80534B38;
}
}
#pragma pop
