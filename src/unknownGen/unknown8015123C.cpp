#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801513E0();
extern void *lbl_805644F4;
}
extern "C" {
void *fn_8015123C(){
 if(!lbl_805644F4 || !(reinterpret_cast<unsigned int *>(lbl_805644F4)[0x24/4]&4)) fn_801513E0();
 return lbl_805644F4;
}
}
#pragma pop
