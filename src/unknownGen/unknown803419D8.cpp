#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80341AD4();
extern void *lbl_805366E8;
}
extern "C" {
void *fn_803419D8(){
 if(!lbl_805366E8 || !(reinterpret_cast<unsigned int *>(lbl_805366E8)[0x24/4]&4)) fn_80341AD4();
 return lbl_805366E8;
}
}
#pragma pop
