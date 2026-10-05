#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800D895C();
extern void *lbl_8056346C;
}
extern "C" {
void *fn_800D8838(){
 if(!lbl_8056346C || !(reinterpret_cast<unsigned int *>(lbl_8056346C)[0x24/4]&4)) fn_800D895C();
 return lbl_8056346C;
}
}
#pragma pop
