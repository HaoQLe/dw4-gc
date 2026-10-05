#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C4390();
extern void *lbl_80534B94;
}
extern "C" {
void *fn_802C41A0(){
 if(!lbl_80534B94 || !(reinterpret_cast<unsigned int *>(lbl_80534B94)[0x24/4]&4)) fn_802C4390();
 return lbl_80534B94;
}
}
#pragma pop
