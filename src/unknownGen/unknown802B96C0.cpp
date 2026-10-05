#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B9780();
extern void *lbl_80534794;
}
extern "C" {
void *fn_802B96C0(){
 if(!lbl_80534794 || !(reinterpret_cast<unsigned int *>(lbl_80534794)[0x24/4]&4)) fn_802B9780();
 return lbl_80534794;
}
}
#pragma pop
