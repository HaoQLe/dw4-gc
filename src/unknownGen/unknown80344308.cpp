#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8034474C();
extern void *lbl_805367F0;
}
extern "C" {
void *fn_80344308(){
 if(!lbl_805367F0 || !(reinterpret_cast<unsigned int *>(lbl_805367F0)[0x24/4]&4)) fn_8034474C();
 return lbl_805367F0;
}
}
#pragma pop
