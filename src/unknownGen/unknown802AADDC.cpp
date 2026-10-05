#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AAE9C();
extern void *lbl_80534364;
}
extern "C" {
void *fn_802AADDC(){
 if(!lbl_80534364 || !(reinterpret_cast<unsigned int *>(lbl_80534364)[0x24/4]&4)) fn_802AAE9C();
 return lbl_80534364;
}
}
#pragma pop
