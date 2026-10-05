#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D0FC0();
extern void *lbl_805350C4;
}
extern "C" {
void *fn_802D0E90(){
 if(!lbl_805350C4 || !(reinterpret_cast<unsigned int *>(lbl_805350C4)[0x24/4]&4)) fn_802D0FC0();
 return lbl_805350C4;
}
}
#pragma pop
