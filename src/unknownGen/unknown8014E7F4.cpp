#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014E9B0();
extern void *lbl_8056446C;
}
extern "C" {
void *fn_8014E7F4(){
 if(!lbl_8056446C || !(reinterpret_cast<unsigned int *>(lbl_8056446C)[0x24/4]&4)) fn_8014E9B0();
 return lbl_8056446C;
}
}
#pragma pop
