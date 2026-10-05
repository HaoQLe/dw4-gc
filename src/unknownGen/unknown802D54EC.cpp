#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D5648();
extern void *lbl_805351E4;
}
extern "C" {
void *fn_802D54EC(){
 if(!lbl_805351E4 || !(reinterpret_cast<unsigned int *>(lbl_805351E4)[0x24/4]&4)) fn_802D5648();
 return lbl_805351E4;
}
}
#pragma pop
