#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014E26C();
extern void *lbl_80564428;
}
extern "C" {
void *fn_8014E0B8(){
 if(!lbl_80564428 || !(reinterpret_cast<unsigned int *>(lbl_80564428)[0x24/4]&4)) fn_8014E26C();
 return lbl_80564428;
}
}
#pragma pop
