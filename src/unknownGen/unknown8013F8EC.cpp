#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013F9F4();
extern void *lbl_80563FAC;
}
extern "C" {
void *fn_8013F8EC(){
 if(!lbl_80563FAC || !(reinterpret_cast<unsigned int *>(lbl_80563FAC)[0x24/4]&4)) fn_8013F9F4();
 return lbl_80563FAC;
}
}
#pragma pop
