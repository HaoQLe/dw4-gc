#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BB4B4();
extern void *lbl_80534808;
}
extern "C" {
void *fn_802BB384(){
 if(!lbl_80534808 || !(reinterpret_cast<unsigned int *>(lbl_80534808)[0x24/4]&4)) fn_802BB4B4();
 return lbl_80534808;
}
}
#pragma pop
