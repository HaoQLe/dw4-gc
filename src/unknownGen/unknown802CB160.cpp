#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CB248();
extern void *lbl_80534ED4;
}
extern "C" {
void *fn_802CB160(){
 if(!lbl_80534ED4 || !(reinterpret_cast<unsigned int *>(lbl_80534ED4)[0x24/4]&4)) fn_802CB248();
 return lbl_80534ED4;
}
}
#pragma pop
