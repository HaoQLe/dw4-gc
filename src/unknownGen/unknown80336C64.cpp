#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80336F04();
extern void *lbl_805360A4;
}
extern "C" {
void *fn_80336C64(){
 if(!lbl_805360A4 || !(reinterpret_cast<unsigned int *>(lbl_805360A4)[0x24/4]&4)) fn_80336F04();
 return lbl_805360A4;
}
}
#pragma pop
