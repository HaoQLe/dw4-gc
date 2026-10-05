#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013E144();
extern void *lbl_80563F5C;
}
extern "C" {
void *fn_8013E03C(){
 if(!lbl_80563F5C || !(reinterpret_cast<unsigned int *>(lbl_80563F5C)[0x24/4]&4)) fn_8013E144();
 return lbl_80563F5C;
}
}
#pragma pop
