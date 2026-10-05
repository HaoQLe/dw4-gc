#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80140DEC();
extern void *lbl_8056400C;
}
extern "C" {
void *fn_80140CC0(){
 if(!lbl_8056400C || !(reinterpret_cast<unsigned int *>(lbl_8056400C)[0x24/4]&4)) fn_80140DEC();
 return lbl_8056400C;
}
}
#pragma pop
