#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D4390();
extern void *lbl_805351A0;
}
extern "C" {
void *fn_802D42AC(){
 if(!lbl_805351A0 || !(reinterpret_cast<unsigned int *>(lbl_805351A0)[0x24/4]&4)) fn_802D4390();
 return lbl_805351A0;
}
}
#pragma pop
