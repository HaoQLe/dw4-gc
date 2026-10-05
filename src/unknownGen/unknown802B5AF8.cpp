#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B5BB8();
extern void *lbl_80534648;
}
extern "C" {
void *fn_802B5AF8(){
 if(!lbl_80534648 || !(reinterpret_cast<unsigned int *>(lbl_80534648)[0x24/4]&4)) fn_802B5BB8();
 return lbl_80534648;
}
}
#pragma pop
