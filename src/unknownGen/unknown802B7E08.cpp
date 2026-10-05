#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B7F64();
extern void *lbl_80534720;
}
extern "C" {
void *fn_802B7E08(){
 if(!lbl_80534720 || !(reinterpret_cast<unsigned int *>(lbl_80534720)[0x24/4]&4)) fn_802B7F64();
 return lbl_80534720;
}
}
#pragma pop
