#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CF4C4();
extern void *lbl_80535038;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CF3B0(){
 if(!lbl_80535038) lbl_80535038=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535038;
}
void *beMessengerArgDataList_getMeta(){
 if(!lbl_80535038 || !(reinterpret_cast<unsigned int *>(lbl_80535038)[0x24/4]&4)) fn_802CF4C4();
 return lbl_80535038;
}
}
#pragma pop
