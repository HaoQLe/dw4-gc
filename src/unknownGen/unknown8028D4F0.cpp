#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8028D5F4();
extern void *lbl_8056610C;
}
extern "C" {
void *fn_8028D4F0(){
 if(!lbl_8056610C || !(reinterpret_cast<unsigned int *>(lbl_8056610C)[0x24/4]&4)) fn_8028D5F4();
 return lbl_8056610C;
}
}
#pragma pop
