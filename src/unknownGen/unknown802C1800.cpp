#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C194C();
extern void *lbl_80534A84;
}
extern "C" {
void *fn_802C1800(){
 if(!lbl_80534A84 || !(reinterpret_cast<unsigned int *>(lbl_80534A84)[0x24/4]&4)) fn_802C194C();
 return lbl_80534A84;
}
}
#pragma pop
