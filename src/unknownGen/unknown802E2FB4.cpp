#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E3074();
extern void *lbl_805356A8;
}
extern "C" {
void *fn_802E2FB4(){
 if(!lbl_805356A8 || !(reinterpret_cast<unsigned int *>(lbl_805356A8)[0x24/4]&4)) fn_802E3074();
 return lbl_805356A8;
}
}
#pragma pop
