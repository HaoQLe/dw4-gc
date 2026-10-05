#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013E634();
extern void *lbl_80563F6C;
}
extern "C" {
void *fn_8013E52C(){
 if(!lbl_80563F6C || !(reinterpret_cast<unsigned int *>(lbl_80563F6C)[0x24/4]&4)) fn_8013E634();
 return lbl_80563F6C;
}
}
#pragma pop
