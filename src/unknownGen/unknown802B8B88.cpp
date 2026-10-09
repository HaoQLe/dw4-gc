#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B8C84();
extern void *lbl_80534754;
}
extern "C" {
void *beSoundData_getMeta(){
 if(!lbl_80534754 || !(reinterpret_cast<unsigned int *>(lbl_80534754)[0x24/4]&4)) fn_802B8C84();
 return lbl_80534754;
}
}
#pragma pop
