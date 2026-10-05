#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BB2C8();
extern void *lbl_80534804;
}
extern "C" {
void *fn_802BB208(){
 if(!lbl_80534804 || !(reinterpret_cast<unsigned int *>(lbl_80534804)[0x24/4]&4)) fn_802BB2C8();
 return lbl_80534804;
}
}
#pragma pop
