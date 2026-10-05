#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013D764();
extern void *lbl_80563F3C;
}
extern "C" {
void *fn_8013D65C(){
 if(!lbl_80563F3C || !(reinterpret_cast<unsigned int *>(lbl_80563F3C)[0x24/4]&4)) fn_8013D764();
 return lbl_80563F3C;
}
}
#pragma pop
