#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B6708();
extern void *lbl_8056285C;
}
extern "C" {
void *fn_800B6540(){
 if(!lbl_8056285C || !(reinterpret_cast<unsigned int *>(lbl_8056285C)[0x24/4]&4)) fn_800B6708();
 return lbl_8056285C;
}
}
#pragma pop
