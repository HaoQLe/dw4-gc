#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C3B90();
extern void *lbl_80534B84;
}
extern "C" {
void *fn_802C3AD0(){
 if(!lbl_80534B84 || !(reinterpret_cast<unsigned int *>(lbl_80534B84)[0x24/4]&4)) fn_802C3B90();
 return lbl_80534B84;
}
}
#pragma pop
