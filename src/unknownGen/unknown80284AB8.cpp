#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284B4C();
extern void *lbl_80515C84;
}
extern "C" {
void *fn_80284AB8(){
 if(!lbl_80515C84 || !(reinterpret_cast<unsigned int *>(lbl_80515C84)[0x24/4]&4)) fn_80284B4C();
 return lbl_80515C84;
}
}
#pragma pop
