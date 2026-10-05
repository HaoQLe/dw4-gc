#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80217444();
extern void *lbl_80565A18;
}
extern "C" {
void *fn_802172F0(){
 if(!lbl_80565A18 || !(reinterpret_cast<unsigned int *>(lbl_80565A18)[0x24/4]&4)) fn_80217444();
 return lbl_80565A18;
}
}
#pragma pop
