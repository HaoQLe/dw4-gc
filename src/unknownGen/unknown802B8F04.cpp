#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B9108();
extern void *lbl_80534774;
}
extern "C" {
void *fn_802B8F04(){
 if(!lbl_80534774 || !(reinterpret_cast<unsigned int *>(lbl_80534774)[0x24/4]&4)) fn_802B9108();
 return lbl_80534774;
}
}
#pragma pop
