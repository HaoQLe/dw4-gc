#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B1C94();
extern void *lbl_80562694;
}
extern "C" {
void *fn_800B1BB8(){
 if(!lbl_80562694 || !(reinterpret_cast<unsigned int *>(lbl_80562694)[0x24/4]&4)) fn_800B1C94();
 return lbl_80562694;
}
}
#pragma pop
