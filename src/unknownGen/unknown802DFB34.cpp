#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802DFC3C();
extern void *lbl_80535580;
}
extern "C" {
void *fn_802DFB34(){
 if(!lbl_80535580 || !(reinterpret_cast<unsigned int *>(lbl_80535580)[0x24/4]&4)) fn_802DFC3C();
 return lbl_80535580;
}
}
#pragma pop
