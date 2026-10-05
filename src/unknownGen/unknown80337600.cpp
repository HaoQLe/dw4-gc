#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803377D0();
extern void *lbl_805360E8;
}
extern "C" {
void *fn_80337600(){
 if(!lbl_805360E8 || !(reinterpret_cast<unsigned int *>(lbl_805360E8)[0x24/4]&4)) fn_803377D0();
 return lbl_805360E8;
}
}
#pragma pop
