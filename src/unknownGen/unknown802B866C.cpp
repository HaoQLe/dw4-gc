#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B86B8();
extern void *lbl_80534734;
}
extern "C" {
void *fn_802B866C(){
 if(!lbl_80534734 || !(reinterpret_cast<unsigned int *>(lbl_80534734)[0x24/4]&4)) fn_802B86B8();
 return lbl_80534734;
}
}
#pragma pop
