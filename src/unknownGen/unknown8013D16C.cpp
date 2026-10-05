#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013D274();
extern void *lbl_80563F2C;
}
extern "C" {
void *fn_8013D16C(){
 if(!lbl_80563F2C || !(reinterpret_cast<unsigned int *>(lbl_80563F2C)[0x24/4]&4)) fn_8013D274();
 return lbl_80563F2C;
}
}
#pragma pop
