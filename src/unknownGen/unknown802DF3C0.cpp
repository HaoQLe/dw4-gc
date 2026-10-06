#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802DF4A8();
extern void *lbl_80535528;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DF3C0(){
 if(!lbl_80535528) lbl_80535528=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535528;
}
void *fn_802DF414(){
 if(!lbl_80535528 || !(reinterpret_cast<unsigned int *>(lbl_80535528)[0x24/4]&4)) fn_802DF4A8();
 return lbl_80535528;
}
}
#pragma pop
