#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802E1098();
extern void *lbl_805355D4;
}
extern "C" {
void *fn_802E0EFC(){
 if(!lbl_805355D4 || !(reinterpret_cast<unsigned int *>(lbl_805355D4)[0x24/4]&4)) fn_802E1098();
 return lbl_805355D4;
}
}
#pragma pop
