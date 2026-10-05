#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013CB0C();
extern void *lbl_80563F14;
}
extern "C" {
void *fn_8013CA04(){
 if(!lbl_80563F14 || !(reinterpret_cast<unsigned int *>(lbl_80563F14)[0x24/4]&4)) fn_8013CB0C();
 return lbl_80563F14;
}
}
#pragma pop
