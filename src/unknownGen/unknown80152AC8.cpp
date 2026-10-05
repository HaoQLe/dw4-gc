#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80152C1C();
extern void *lbl_8056456C;
}
extern "C" {
void *fn_80152AC8(){
 if(!lbl_8056456C || !(reinterpret_cast<unsigned int *>(lbl_8056456C)[0x24/4]&4)) fn_80152C1C();
 return lbl_8056456C;
}
}
#pragma pop
