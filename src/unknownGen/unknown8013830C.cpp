#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80138558();
extern void *lbl_80563D94;
}
extern "C" {
void *fn_8013830C(){
 if(!lbl_80563D94 || !(reinterpret_cast<unsigned int *>(lbl_80563D94)[0x24/4]&4)) fn_80138558();
 return lbl_80563D94;
}
}
#pragma pop
