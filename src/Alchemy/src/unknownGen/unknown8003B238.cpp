#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8003B31C();
extern void *lbl_805620A0;
}
extern "C" {
void *fn_8003B238(){
 if(!lbl_805620A0 || !(reinterpret_cast<unsigned int *>(lbl_805620A0)[0x24/4]&4)) fn_8003B31C();
 return lbl_805620A0;
}
}
#pragma pop
