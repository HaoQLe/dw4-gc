#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D2A88();
extern void *lbl_80562FDC;
}
extern "C" {
void *fn_800D2978(){
 if(!lbl_80562FDC || !(reinterpret_cast<unsigned int *>(lbl_80562FDC)[0x24/4]&4)) fn_800D2A88();
 return lbl_80562FDC;
}
}
#pragma pop
