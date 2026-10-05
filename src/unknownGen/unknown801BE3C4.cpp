#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801BE514();
extern void *lbl_80564E7C;
}
extern "C" {
void *fn_801BE3C4(){
 if(!lbl_80564E7C || !(reinterpret_cast<unsigned int *>(lbl_80564E7C)[0x24/4]&4)) fn_801BE514();
 return lbl_80564E7C;
}
}
#pragma pop
