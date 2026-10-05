#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_803459E0();
extern void *lbl_8053684C;
}
extern "C" {
void *fn_803457F4(){
 if(!lbl_8053684C || !(reinterpret_cast<unsigned int *>(lbl_8053684C)[0x24/4]&4)) fn_803459E0();
 return lbl_8053684C;
}
}
#pragma pop
