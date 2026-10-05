#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013C894();
extern void *lbl_80563F0C;
}
extern "C" {
void *fn_8013C78C(){
 if(!lbl_80563F0C || !(reinterpret_cast<unsigned int *>(lbl_80563F0C)[0x24/4]&4)) fn_8013C894();
 return lbl_80563F0C;
}
}
#pragma pop
