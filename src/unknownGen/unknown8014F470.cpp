#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014F62C();
extern void *lbl_805644A0;
}
extern "C" {
void *fn_8014F470(){
 if(!lbl_805644A0 || !(reinterpret_cast<unsigned int *>(lbl_805644A0)[0x24/4]&4)) fn_8014F62C();
 return lbl_805644A0;
}
}
#pragma pop
