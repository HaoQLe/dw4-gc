#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D1784();
extern void *lbl_805350F8;
}
extern "C" {
void *fn_802D1640(){
 if(!lbl_805350F8 || !(reinterpret_cast<unsigned int *>(lbl_805350F8)[0x24/4]&4)) fn_802D1784();
 return lbl_805350F8;
}
}
#pragma pop
