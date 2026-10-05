#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C2080();
extern void *lbl_80534AA8;
}
extern "C" {
void *fn_802C1F24(){
 if(!lbl_80534AA8 || !(reinterpret_cast<unsigned int *>(lbl_80534AA8)[0x24/4]&4)) fn_802C2080();
 return lbl_80534AA8;
}
}
#pragma pop
