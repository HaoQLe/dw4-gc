#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013ED9C();
extern void *lbl_80563F84;
}
extern "C" {
void *fn_8013EC94(){
 if(!lbl_80563F84 || !(reinterpret_cast<unsigned int *>(lbl_80563F84)[0x24/4]&4)) fn_8013ED9C();
 return lbl_80563F84;
}
}
#pragma pop
