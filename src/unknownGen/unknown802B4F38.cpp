#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B5094();
extern void *lbl_80534620;
}
extern "C" {
void *fn_802B4F38(){
 if(!lbl_80534620 || !(reinterpret_cast<unsigned int *>(lbl_80534620)[0x24/4]&4)) fn_802B5094();
 return lbl_80534620;
}
}
#pragma pop
