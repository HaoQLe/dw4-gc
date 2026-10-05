#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D0B30();
extern void *lbl_805350A8;
}
extern "C" {
void *fn_802D0A58(){
 if(!lbl_805350A8 || !(reinterpret_cast<unsigned int *>(lbl_805350A8)[0x24/4]&4)) fn_802D0B30();
 return lbl_805350A8;
}
}
#pragma pop
