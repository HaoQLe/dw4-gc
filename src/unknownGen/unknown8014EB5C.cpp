#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014ECC8();
extern void *lbl_8056447C;
}
extern "C" {
void *fn_8014EB5C(){
 if(!lbl_8056447C || !(reinterpret_cast<unsigned int *>(lbl_8056447C)[0x24/4]&4)) fn_8014ECC8();
 return lbl_8056447C;
}
}
#pragma pop
