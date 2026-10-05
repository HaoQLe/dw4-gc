#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033A71C();
extern void *lbl_805361F8;
}
extern "C" {
void *fn_8033A55C(){
 if(!lbl_805361F8 || !(reinterpret_cast<unsigned int *>(lbl_805361F8)[0x24/4]&4)) fn_8033A71C();
 return lbl_805361F8;
}
}
#pragma pop
