#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B7220();
extern void *lbl_80534698;
}
extern "C" {
void *fn_802B7054(){
 if(!lbl_80534698 || !(reinterpret_cast<unsigned int *>(lbl_80534698)[0x24/4]&4)) fn_802B7220();
 return lbl_80534698;
}
}
#pragma pop
