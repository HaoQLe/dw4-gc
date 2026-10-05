#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801150A0();
extern void *lbl_8056384C;
}
extern "C" {
void *fn_80114F90(){
 if(!lbl_8056384C || !(reinterpret_cast<unsigned int *>(lbl_8056384C)[0x24/4]&4)) fn_801150A0();
 return lbl_8056384C;
}
}
#pragma pop
