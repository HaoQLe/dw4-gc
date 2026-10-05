#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80408FA4();
extern void *lbl_8055CB1C;
}
extern "C" {
void *fn_80408CE4(){
 if(!lbl_8055CB1C || !(reinterpret_cast<unsigned int *>(lbl_8055CB1C)[0x24/4]&4)) fn_80408FA4();
 return lbl_8055CB1C;
}
}
#pragma pop
