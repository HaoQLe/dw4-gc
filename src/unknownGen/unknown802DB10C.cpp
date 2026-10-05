#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DB298();
extern void *lbl_805353E4;
}
extern "C" {
void *fn_802DB10C(){
 if(!lbl_805353E4 || !(reinterpret_cast<unsigned int *>(lbl_805353E4)[0x24/4]&4)) fn_802DB298();
 return lbl_805353E4;
}
}
#pragma pop
