#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C15D8();
extern void *lbl_80534A74;
}
extern "C" {
void *fn_802C13B4(){
 if(!lbl_80534A74 || !(reinterpret_cast<unsigned int *>(lbl_80534A74)[0x24/4]&4)) fn_802C15D8();
 return lbl_80534A74;
}
}
#pragma pop
