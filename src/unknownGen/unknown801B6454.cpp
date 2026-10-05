#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801B659C();
extern void *lbl_80564B74;
}
extern "C" {
void *fn_801B6454(){
 if(!lbl_80564B74 || !(reinterpret_cast<unsigned int *>(lbl_80564B74)[0x24/4]&4)) fn_801B659C();
 return lbl_80564B74;
}
}
#pragma pop
