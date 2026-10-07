#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802BC568();
extern void *lbl_80534840;
}
extern "C" {
void *fn_802BC438(){
 if(!lbl_80534840 || !(reinterpret_cast<unsigned int *>(lbl_80534840)[0x24/4]&4)) fn_802BC568();
 return lbl_80534840;
}
}
#pragma pop
