#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C53C0();
extern void *lbl_80534BF0;
}
extern "C" {
void *fn_802C52E8(){
 if(!lbl_80534BF0 || !(reinterpret_cast<unsigned int *>(lbl_80534BF0)[0x24/4]&4)) fn_802C53C0();
 return lbl_80534BF0;
}
}
#pragma pop
