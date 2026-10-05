#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B51DC();
extern void *lbl_80534624;
}
extern "C" {
void *fn_802B5148(){
 if(!lbl_80534624 || !(reinterpret_cast<unsigned int *>(lbl_80534624)[0x24/4]&4)) fn_802B51DC();
 return lbl_80534624;
}
}
#pragma pop
