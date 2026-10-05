#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80336514();
extern void *lbl_80536090;
}
extern "C" {
void *fn_80336370(){
 if(!lbl_80536090 || !(reinterpret_cast<unsigned int *>(lbl_80536090)[0x24/4]&4)) fn_80336514();
 return lbl_80536090;
}
}
#pragma pop
