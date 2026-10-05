#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033FA74();
extern void *lbl_805365E8;
}
extern "C" {
void *fn_8033F9B4(){
 if(!lbl_805365E8 || !(reinterpret_cast<unsigned int *>(lbl_805365E8)[0x24/4]&4)) fn_8033FA74();
 return lbl_805365E8;
}
}
#pragma pop
