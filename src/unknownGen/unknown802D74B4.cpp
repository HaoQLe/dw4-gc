#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D7774();
extern void *lbl_80535294;
}
extern "C" {
void *fn_802D74B4(){
 if(!lbl_80535294 || !(reinterpret_cast<unsigned int *>(lbl_80535294)[0x24/4]&4)) fn_802D7774();
 return lbl_80535294;
}
}
#pragma pop
