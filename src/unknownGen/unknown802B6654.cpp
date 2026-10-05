#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B6784();
extern void *lbl_80534678;
}
extern "C" {
void *fn_802B6654(){
 if(!lbl_80534678 || !(reinterpret_cast<unsigned int *>(lbl_80534678)[0x24/4]&4)) fn_802B6784();
 return lbl_80534678;
}
}
#pragma pop
