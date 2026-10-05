#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8015323C();
extern void *lbl_80564580;
}
extern "C" {
void *fn_801530E8(){
 if(!lbl_80564580 || !(reinterpret_cast<unsigned int *>(lbl_80564580)[0x24/4]&4)) fn_8015323C();
 return lbl_80564580;
}
}
#pragma pop
