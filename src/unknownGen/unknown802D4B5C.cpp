#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802D4E4C();
extern void *lbl_805351C4;
}
extern "C" {
void *fn_802D4B5C(){
 if(!lbl_805351C4 || !(reinterpret_cast<unsigned int *>(lbl_805351C4)[0x24/4]&4)) fn_802D4E4C();
 return lbl_805351C4;
}
}
#pragma pop
