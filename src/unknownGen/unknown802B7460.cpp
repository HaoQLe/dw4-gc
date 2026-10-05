#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B7774();
extern void *lbl_805346A8;
}
extern "C" {
void *fn_802B7460(){
 if(!lbl_805346A8 || !(reinterpret_cast<unsigned int *>(lbl_805346A8)[0x24/4]&4)) fn_802B7774();
 return lbl_805346A8;
}
}
#pragma pop
