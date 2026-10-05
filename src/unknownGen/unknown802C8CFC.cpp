#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C8EFC();
extern void *lbl_80534DF8;
}
extern "C" {
void *fn_802C8CFC(){
 if(!lbl_80534DF8 || !(reinterpret_cast<unsigned int *>(lbl_80534DF8)[0x24/4]&4)) fn_802C8EFC();
 return lbl_80534DF8;
}
}
#pragma pop
