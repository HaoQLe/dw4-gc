#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B007C();
extern void *lbl_805625B0;
}
extern "C" {
void *fn_800AFF90(){
 if(!lbl_805625B0 || !(reinterpret_cast<unsigned int *>(lbl_805625B0)[0x24/4]&4)) fn_800B007C();
 return lbl_805625B0;
}
}
#pragma pop
