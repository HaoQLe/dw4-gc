#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013F77C();
extern void *lbl_80563FA4;
}
extern "C" {
void *fn_8013F674(){
 if(!lbl_80563FA4 || !(reinterpret_cast<unsigned int *>(lbl_80563FA4)[0x24/4]&4)) fn_8013F77C();
 return lbl_80563FA4;
}
}
#pragma pop
