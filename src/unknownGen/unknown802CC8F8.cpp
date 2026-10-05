#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_802CC9B8();
extern void *lbl_80534F3C;
}
extern "C" {
void *fn_802CC8F8(){
 if(!lbl_80534F3C || !(reinterpret_cast<unsigned int *>(lbl_80534F3C)[0x24/4]&4)) fn_802CC9B8();
 return lbl_80534F3C;
}
}
#pragma pop
