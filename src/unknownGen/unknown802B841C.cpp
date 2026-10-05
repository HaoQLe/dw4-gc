#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B85B8();
extern void *lbl_80534730;
}
extern "C" {
void *fn_802B841C(){
 if(!lbl_80534730 || !(reinterpret_cast<unsigned int *>(lbl_80534730)[0x24/4]&4)) fn_802B85B8();
 return lbl_80534730;
}
}
#pragma pop
