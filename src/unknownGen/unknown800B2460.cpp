#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B253C();
extern void *lbl_805626B8;
}
extern "C" {
void *fn_800B2460(){
 if(!lbl_805626B8 || !(reinterpret_cast<unsigned int *>(lbl_805626B8)[0x24/4]&4)) fn_800B253C();
 return lbl_805626B8;
}
}
#pragma pop
