#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_800D7994();
extern void *lbl_805621F4;
extern void *lbl_805633C0;
}
extern "C" {
void *fn_800D7874(){
 if(!lbl_805633C0) lbl_805633C0=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805633C0;
}
void *fn_800D78B0(){
 if(!lbl_805633C0 || !(reinterpret_cast<unsigned int *>(lbl_805633C0)[0x24/4]&4)) fn_800D7994();
 return lbl_805633C0;
}
}
#pragma pop
