#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801354C8();
extern void *lbl_80563C84;
}
extern "C" {
void *fn_80135304(){
 if(!lbl_80563C84 || !(reinterpret_cast<unsigned int *>(lbl_80563C84)[0x24/4]&4)) fn_801354C8();
 return lbl_80563C84;
}
}
#pragma pop
