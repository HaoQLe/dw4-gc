#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014D658();
extern void *lbl_805643E4;
}
extern "C" {
void *fn_8014D4EC(){
 if(!lbl_805643E4 || !(reinterpret_cast<unsigned int *>(lbl_805643E4)[0x24/4]&4)) fn_8014D658();
 return lbl_805643E4;
}
}
#pragma pop
