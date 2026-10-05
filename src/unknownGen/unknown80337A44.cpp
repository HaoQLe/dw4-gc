#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80337C14();
extern void *lbl_805360F8;
}
extern "C" {
void *fn_80337A44(){
 if(!lbl_805360F8 || !(reinterpret_cast<unsigned int *>(lbl_805360F8)[0x24/4]&4)) fn_80337C14();
 return lbl_805360F8;
}
}
#pragma pop
