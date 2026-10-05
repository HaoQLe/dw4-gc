#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C6198();
extern void *lbl_80534C50;
}
extern "C" {
void *fn_802C5E9C(){
 if(!lbl_80534C50 || !(reinterpret_cast<unsigned int *>(lbl_80534C50)[0x24/4]&4)) fn_802C6198();
 return lbl_80534C50;
}
}
#pragma pop
