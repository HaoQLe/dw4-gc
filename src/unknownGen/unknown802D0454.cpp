#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D0690();
extern void *lbl_80535094;
}
extern "C" {
void *fn_802D0454(){
 if(!lbl_80535094 || !(reinterpret_cast<unsigned int *>(lbl_80535094)[0x24/4]&4)) fn_802D0690();
 return lbl_80535094;
}
}
#pragma pop
