#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C6C54();
extern void *lbl_80534C64;
}
extern "C" {
void *fn_802C63D4(){
 if(!lbl_80534C64 || !(reinterpret_cast<unsigned int *>(lbl_80534C64)[0x24/4]&4)) fn_802C6C54();
 return lbl_80534C64;
}
}
#pragma pop
