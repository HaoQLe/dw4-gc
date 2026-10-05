#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800B6150();
extern void *lbl_8056283C;
}
extern "C" {
void *fn_800B5FC0(){
 if(!lbl_8056283C || !(reinterpret_cast<unsigned int *>(lbl_8056283C)[0x24/4]&4)) fn_800B6150();
 return lbl_8056283C;
}
}
#pragma pop
