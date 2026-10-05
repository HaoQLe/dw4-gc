#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802C4CE0();
extern void *lbl_80534BD0;
}
extern "C" {
void *fn_802C4B14(){
 if(!lbl_80534BD0 || !(reinterpret_cast<unsigned int *>(lbl_80534BD0)[0x24/4]&4)) fn_802C4CE0();
 return lbl_80534BD0;
}
}
#pragma pop
