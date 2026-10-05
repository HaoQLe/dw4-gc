#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D45E4();
extern void *lbl_805351A8;
}
extern "C" {
void *fn_802D44FC(){
 if(!lbl_805351A8 || !(reinterpret_cast<unsigned int *>(lbl_805351A8)[0x24/4]&4)) fn_802D45E4();
 return lbl_805351A8;
}
}
#pragma pop
