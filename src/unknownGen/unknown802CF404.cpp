#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CF4C4();
extern void *lbl_80535038;
}
extern "C" {
void *fn_802CF404(){
 if(!lbl_80535038 || !(reinterpret_cast<unsigned int *>(lbl_80535038)[0x24/4]&4)) fn_802CF4C4();
 return lbl_80535038;
}
}
#pragma pop
