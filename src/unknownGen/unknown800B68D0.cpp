#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B6AE4();
extern void *lbl_80562880;
}
extern "C" {
void *fn_800B68D0(){
 if(!lbl_80562880 || !(reinterpret_cast<unsigned int *>(lbl_80562880)[0x24/4]&4)) fn_800B6AE4();
 return lbl_80562880;
}
}
#pragma pop
