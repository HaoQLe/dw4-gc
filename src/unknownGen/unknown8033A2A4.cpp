#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033A414();
extern void *lbl_805361F4;
}
extern "C" {
void *fn_8033A2A4(){
 if(!lbl_805361F4 || !(reinterpret_cast<unsigned int *>(lbl_805361F4)[0x24/4]&4)) fn_8033A414();
 return lbl_805361F4;
}
}
#pragma pop
