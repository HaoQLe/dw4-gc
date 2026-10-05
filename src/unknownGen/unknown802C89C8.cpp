#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C8BAC();
extern void *lbl_80534DF0;
}
extern "C" {
void *fn_802C89C8(){
 if(!lbl_80534DF0 || !(reinterpret_cast<unsigned int *>(lbl_80534DF0)[0x24/4]&4)) fn_802C8BAC();
 return lbl_80534DF0;
}
}
#pragma pop
