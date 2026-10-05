#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013DC54();
extern void *lbl_80563F4C;
}
extern "C" {
void *fn_8013DB4C(){
 if(!lbl_80563F4C || !(reinterpret_cast<unsigned int *>(lbl_80563F4C)[0x24/4]&4)) fn_8013DC54();
 return lbl_80563F4C;
}
}
#pragma pop
