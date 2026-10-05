#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80337E80();
extern void *lbl_80536108;
}
extern "C" {
void *fn_80337E34(){
 if(!lbl_80536108 || !(reinterpret_cast<unsigned int *>(lbl_80536108)[0x24/4]&4)) fn_80337E80();
 return lbl_80536108;
}
}
#pragma pop
