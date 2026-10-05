#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D26A4();
extern void *lbl_80535124;
}
extern "C" {
void *fn_802D24D8(){
 if(!lbl_80535124 || !(reinterpret_cast<unsigned int *>(lbl_80535124)[0x24/4]&4)) fn_802D26A4();
 return lbl_80535124;
}
}
#pragma pop
