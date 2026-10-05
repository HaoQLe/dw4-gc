#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D3BD4();
extern void *lbl_80535168;
}
extern "C" {
void *fn_802D3A30(){
 if(!lbl_80535168 || !(reinterpret_cast<unsigned int *>(lbl_80535168)[0x24/4]&4)) fn_802D3BD4();
 return lbl_80535168;
}
}
#pragma pop
