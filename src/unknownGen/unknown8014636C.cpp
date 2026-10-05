#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801464E8();
extern void *lbl_80564178;
}
extern "C" {
void *fn_8014636C(){
 if(!lbl_80564178 || !(reinterpret_cast<unsigned int *>(lbl_80564178)[0x24/4]&4)) fn_801464E8();
 return lbl_80564178;
}
}
#pragma pop
