#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8015253C();
extern void *lbl_80564548;
}
extern "C" {
void *fn_801523C0(){
 if(!lbl_80564548 || !(reinterpret_cast<unsigned int *>(lbl_80564548)[0x24/4]&4)) fn_8015253C();
 return lbl_80564548;
}
}
#pragma pop
