#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013BC10();
extern void *lbl_80563EDC;
}
extern "C" {
void *fn_8013BAB0(){
 if(!lbl_80563EDC || !(reinterpret_cast<unsigned int *>(lbl_80563EDC)[0x24/4]&4)) fn_8013BC10();
 return lbl_80563EDC;
}
}
#pragma pop
