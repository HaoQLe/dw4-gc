#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803393C0();
extern void *lbl_80536188;
}
extern "C" {
void *fn_80338FF4(){
 if(!lbl_80536188 || !(reinterpret_cast<unsigned int *>(lbl_80536188)[0x24/4]&4)) fn_803393C0();
 return lbl_80536188;
}
}
#pragma pop
