#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CB0AC();
extern void *lbl_80534ED0;
}
extern "C" {
void *fn_802CAFC4(){
 if(!lbl_80534ED0 || !(reinterpret_cast<unsigned int *>(lbl_80534ED0)[0x24/4]&4)) fn_802CB0AC();
 return lbl_80534ED0;
}
}
#pragma pop
