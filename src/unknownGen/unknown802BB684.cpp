#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BB7E0();
extern void *lbl_80534814;
}
extern "C" {
void *fn_802BB684(){
 if(!lbl_80534814 || !(reinterpret_cast<unsigned int *>(lbl_80534814)[0x24/4]&4)) fn_802BB7E0();
 return lbl_80534814;
}
}
#pragma pop
