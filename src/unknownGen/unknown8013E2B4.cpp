#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013E3BC();
extern void *lbl_80563F64;
}
extern "C" {
void *fn_8013E2B4(){
 if(!lbl_80563F64 || !(reinterpret_cast<unsigned int *>(lbl_80563F64)[0x24/4]&4)) fn_8013E3BC();
 return lbl_80563F64;
}
}
#pragma pop
