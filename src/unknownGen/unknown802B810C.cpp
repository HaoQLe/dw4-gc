#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802B82B0();
extern void *lbl_80534728;
}
extern "C" {
void *fn_802B810C(){
 if(!lbl_80534728 || !(reinterpret_cast<unsigned int *>(lbl_80534728)[0x24/4]&4)) fn_802B82B0();
 return lbl_80534728;
}
}
#pragma pop
