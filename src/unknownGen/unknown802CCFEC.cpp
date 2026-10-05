#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CD1F0();
extern void *lbl_80534F5C;
}
extern "C" {
void *fn_802CCFEC(){
 if(!lbl_80534F5C || !(reinterpret_cast<unsigned int *>(lbl_80534F5C)[0x24/4]&4)) fn_802CD1F0();
 return lbl_80534F5C;
}
}
#pragma pop
