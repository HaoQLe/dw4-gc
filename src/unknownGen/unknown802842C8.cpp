#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80284388();
extern void *lbl_80515C54;
}
extern "C" {
void *fn_802842C8(){
 if(!lbl_80515C54 || !(reinterpret_cast<unsigned int *>(lbl_80515C54)[0x24/4]&4)) fn_80284388();
 return lbl_80515C54;
}
}
#pragma pop
