#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CE4E8();
extern void *lbl_80534FE0;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CE3D4(){
 if(!lbl_80534FE0) lbl_80534FE0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534FE0;
}
void *beMessengerWorkList_getMeta(){
 if(!lbl_80534FE0 || !(reinterpret_cast<unsigned int *>(lbl_80534FE0)[0x24/4]&4)) fn_802CE4E8();
 return lbl_80534FE0;
}
}
#pragma pop
