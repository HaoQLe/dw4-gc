#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_801303D8();
extern void *lbl_80563AB0;
}
extern "C" {
void *fn_8013025C(){
 if(!lbl_80563AB0 || !(reinterpret_cast<unsigned int *>(lbl_80563AB0)[0x24/4]&4)) fn_801303D8();
 return lbl_80563AB0;
}
}
#pragma pop
