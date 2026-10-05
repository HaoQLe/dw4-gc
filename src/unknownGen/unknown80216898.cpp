#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8021695C();
extern void *lbl_805659DC;
}
extern "C" {
void *fn_80216898(){
 if(!lbl_805659DC || !(reinterpret_cast<unsigned int *>(lbl_805659DC)[0x24/4]&4)) fn_8021695C();
 return lbl_805659DC;
}
}
#pragma pop
