#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B58D8();
extern void *lbl_80534630;
}
extern "C" {
void *fn_802B578C(){
 if(!lbl_80534630 || !(reinterpret_cast<unsigned int *>(lbl_80534630)[0x24/4]&4)) fn_802B58D8();
 return lbl_80534630;
}
}
#pragma pop
