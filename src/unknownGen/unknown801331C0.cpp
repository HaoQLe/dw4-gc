#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013339C();
extern void *lbl_80563BC8;
}
extern "C" {
void *fn_801331C0(){
 if(!lbl_80563BC8 || !(reinterpret_cast<unsigned int *>(lbl_80563BC8)[0x24/4]&4)) fn_8013339C();
 return lbl_80563BC8;
}
}
#pragma pop
