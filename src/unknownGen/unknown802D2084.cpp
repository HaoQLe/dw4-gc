#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D2144();
extern void *lbl_80535114;
}
extern "C" {
void *fn_802D2084(){
 if(!lbl_80535114 || !(reinterpret_cast<unsigned int *>(lbl_80535114)[0x24/4]&4)) fn_802D2144();
 return lbl_80535114;
}
}
#pragma pop
