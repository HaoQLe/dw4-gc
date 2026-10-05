#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DE5E0();
extern void *lbl_805354C4;
}
extern "C" {
void *fn_802DE484(){
 if(!lbl_805354C4 || !(reinterpret_cast<unsigned int *>(lbl_805354C4)[0x24/4]&4)) fn_802DE5E0();
 return lbl_805354C4;
}
}
#pragma pop
