#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D9DF4();
extern void *lbl_80535358;
}
extern "C" {
void *fn_802D9A8C(){
 if(!lbl_80535358 || !(reinterpret_cast<unsigned int *>(lbl_80535358)[0x24/4]&4)) fn_802D9DF4();
 return lbl_80535358;
}
}
#pragma pop
