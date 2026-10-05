#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CB3E4();
extern void *lbl_80534ED8;
}
extern "C" {
void *fn_802CB2FC(){
 if(!lbl_80534ED8 || !(reinterpret_cast<unsigned int *>(lbl_80534ED8)[0x24/4]&4)) fn_802CB3E4();
 return lbl_80534ED8;
}
}
#pragma pop
