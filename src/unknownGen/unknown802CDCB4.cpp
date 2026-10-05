#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CDE10();
extern void *lbl_80534FB8;
}
extern "C" {
void *fn_802CDCB4(){
 if(!lbl_80534FB8 || !(reinterpret_cast<unsigned int *>(lbl_80534FB8)[0x24/4]&4)) fn_802CDE10();
 return lbl_80534FB8;
}
}
#pragma pop
