#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C5CB8();
extern void *lbl_80534C40;
}
extern "C" {
void *fn_802C5C6C(){
 if(!lbl_80534C40 || !(reinterpret_cast<unsigned int *>(lbl_80534C40)[0x24/4]&4)) fn_802C5CB8();
 return lbl_80534C40;
}
}
#pragma pop
