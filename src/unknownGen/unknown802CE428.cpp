#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CE4E8();
extern void *lbl_80534FE0;
}
extern "C" {
void *fn_802CE428(){
 if(!lbl_80534FE0 || !(reinterpret_cast<unsigned int *>(lbl_80534FE0)[0x24/4]&4)) fn_802CE4E8();
 return lbl_80534FE0;
}
}
#pragma pop
