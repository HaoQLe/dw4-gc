#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CE1F0();
extern void *lbl_80534FBC;
}
extern "C" {
void *fn_802CDF58(){
 if(!lbl_80534FBC || !(reinterpret_cast<unsigned int *>(lbl_80534FBC)[0x24/4]&4)) fn_802CE1F0();
 return lbl_80534FBC;
}
}
#pragma pop
