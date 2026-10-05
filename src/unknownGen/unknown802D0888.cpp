#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D0948();
extern void *lbl_805350A4;
}
extern "C" {
void *fn_802D0888(){
 if(!lbl_805350A4 || !(reinterpret_cast<unsigned int *>(lbl_805350A4)[0x24/4]&4)) fn_802D0948();
 return lbl_805350A4;
}
}
#pragma pop
