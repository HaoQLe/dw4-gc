#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802ABE74();
extern void *lbl_805343DC;
}
extern "C" {
void *fn_802ABCE8(){
 if(!lbl_805343DC || !(reinterpret_cast<unsigned int *>(lbl_805343DC)[0x24/4]&4)) fn_802ABE74();
 return lbl_805343DC;
}
}
#pragma pop
