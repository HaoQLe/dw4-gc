#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802AA850();
extern void *lbl_80534350;
}
extern "C" {
void *igAdx_getMeta(){
 if(!lbl_80534350 || !(reinterpret_cast<unsigned int *>(lbl_80534350)[0x24/4]&4)) fn_802AA850();
 return lbl_80534350;
}
}
#pragma pop
