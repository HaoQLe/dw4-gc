#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80336A6C();
extern void *lbl_8053609C;
}
extern "C" {
void *fn_803368C8(){
 if(!lbl_8053609C || !(reinterpret_cast<unsigned int *>(lbl_8053609C)[0x24/4]&4)) fn_80336A6C();
 return lbl_8053609C;
}
}
#pragma pop
