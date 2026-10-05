#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DF4A8();
extern void *lbl_80535528;
}
extern "C" {
void *fn_802DF414(){
 if(!lbl_80535528 || !(reinterpret_cast<unsigned int *>(lbl_80535528)[0x24/4]&4)) fn_802DF4A8();
 return lbl_80535528;
}
}
#pragma pop
