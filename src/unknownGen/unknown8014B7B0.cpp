#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8014B8DC();
extern void *lbl_8056432C;
}
extern "C" {
void *fn_8014B7B0(){
 if(!lbl_8056432C || !(reinterpret_cast<unsigned int *>(lbl_8056432C)[0x24/4]&4)) fn_8014B8DC();
 return lbl_8056432C;
}
}
#pragma pop
