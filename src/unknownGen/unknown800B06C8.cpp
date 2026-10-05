#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B0818();
extern void *lbl_805625F4;
}
extern "C" {
void *fn_800B06C8(){
 if(!lbl_805625F4 || !(reinterpret_cast<unsigned int *>(lbl_805625F4)[0x24/4]&4)) fn_800B0818();
 return lbl_805625F4;
}
}
#pragma pop
