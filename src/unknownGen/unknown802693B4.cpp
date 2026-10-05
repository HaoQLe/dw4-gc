#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802694D0();
extern void *lbl_80565FEC;
}
extern "C" {
void *fn_802693B4(){
 if(!lbl_80565FEC || !(reinterpret_cast<unsigned int *>(lbl_80565FEC)[0x24/4]&4)) fn_802694D0();
 return lbl_80565FEC;
}
}
#pragma pop
