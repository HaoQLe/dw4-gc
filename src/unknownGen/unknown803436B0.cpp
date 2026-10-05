#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80343770();
extern void *lbl_80536764;
}
extern "C" {
void *fn_803436B0(){
 if(!lbl_80536764 || !(reinterpret_cast<unsigned int *>(lbl_80536764)[0x24/4]&4)) fn_80343770();
 return lbl_80536764;
}
}
#pragma pop
