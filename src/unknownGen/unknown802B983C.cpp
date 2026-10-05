#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B9A78();
extern void *lbl_80534798;
}
extern "C" {
void *fn_802B983C(){
 if(!lbl_80534798 || !(reinterpret_cast<unsigned int *>(lbl_80534798)[0x24/4]&4)) fn_802B9A78();
 return lbl_80534798;
}
}
#pragma pop
