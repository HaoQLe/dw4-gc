#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DA10C();
extern void *lbl_80535384;
}
extern "C" {
void *fn_802DA04C(){
 if(!lbl_80535384 || !(reinterpret_cast<unsigned int *>(lbl_80535384)[0x24/4]&4)) fn_802DA10C();
 return lbl_80535384;
}
}
#pragma pop
