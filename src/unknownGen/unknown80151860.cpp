#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80151A1C();
extern void *lbl_8056451C;
}
extern "C" {
void *fn_80151860(){
 if(!lbl_8056451C || !(reinterpret_cast<unsigned int *>(lbl_8056451C)[0x24/4]&4)) fn_80151A1C();
 return lbl_8056451C;
}
}
#pragma pop
