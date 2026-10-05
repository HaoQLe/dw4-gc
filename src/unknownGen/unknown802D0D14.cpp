#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D0DD4();
extern void *lbl_805350C0;
}
extern "C" {
void *fn_802D0D14(){
 if(!lbl_805350C0 || !(reinterpret_cast<unsigned int *>(lbl_805350C0)[0x24/4]&4)) fn_802D0DD4();
 return lbl_805350C0;
}
}
#pragma pop
