#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801AD6FC();
extern void *lbl_8056475C;
}
extern "C" {
void *fn_801AD5B4(){
 if(!lbl_8056475C || !(reinterpret_cast<unsigned int *>(lbl_8056475C)[0x24/4]&4)) fn_801AD6FC();
 return lbl_8056475C;
}
}
#pragma pop
