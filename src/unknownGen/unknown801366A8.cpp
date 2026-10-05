#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8013690C();
extern void *lbl_80563CD0;
}
extern "C" {
void *fn_801366A8(){
 if(!lbl_80563CD0 || !(reinterpret_cast<unsigned int *>(lbl_80563CD0)[0x24/4]&4)) fn_8013690C();
 return lbl_80563CD0;
}
}
#pragma pop
