#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802854A8();
extern void *lbl_80515CA0;
}
extern "C" {
void *fn_80285384(){
 if(!lbl_80515CA0 || !(reinterpret_cast<unsigned int *>(lbl_80515CA0)[0x24/4]&4)) fn_802854A8();
 return lbl_80515CA0;
}
}
#pragma pop
