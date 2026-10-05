#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D340C();
extern void *lbl_80535150;
}
extern "C" {
void *fn_802D3228(){
 if(!lbl_80535150 || !(reinterpret_cast<unsigned int *>(lbl_80535150)[0x24/4]&4)) fn_802D340C();
 return lbl_80535150;
}
}
#pragma pop
