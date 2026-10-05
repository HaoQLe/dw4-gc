#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80134290();
extern void *lbl_80563C0C;
}
extern "C" {
void *fn_80134114(){
 if(!lbl_80563C0C || !(reinterpret_cast<unsigned int *>(lbl_80563C0C)[0x24/4]&4)) fn_80134290();
 return lbl_80563C0C;
}
}
#pragma pop
