#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B93A0();
extern void *lbl_80534784;
}
extern "C" {
void *fn_802B92E0(){
 if(!lbl_80534784 || !(reinterpret_cast<unsigned int *>(lbl_80534784)[0x24/4]&4)) fn_802B93A0();
 return lbl_80534784;
}
}
#pragma pop
