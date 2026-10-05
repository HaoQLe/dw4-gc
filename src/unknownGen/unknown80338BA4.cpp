#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80338DA4();
extern void *lbl_80536178;
}
extern "C" {
void *fn_80338BA4(){
 if(!lbl_80536178 || !(reinterpret_cast<unsigned int *>(lbl_80536178)[0x24/4]&4)) fn_80338DA4();
 return lbl_80536178;
}
}
#pragma pop
