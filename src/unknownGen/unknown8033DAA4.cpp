#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8033DB64();
extern void *lbl_80536458;
}
extern "C" {
void *fn_8033DAA4(){
 if(!lbl_80536458 || !(reinterpret_cast<unsigned int *>(lbl_80536458)[0x24/4]&4)) fn_8033DB64();
 return lbl_80536458;
}
}
#pragma pop
