#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_802CA85C();
extern void *lbl_80534E9C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CA748(){
 if(!lbl_80534E9C) lbl_80534E9C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534E9C;
}
void *fn_802CA79C(){
 if(!lbl_80534E9C || !(reinterpret_cast<unsigned int *>(lbl_80534E9C)[0x24/4]&4)) fn_802CA85C();
 return lbl_80534E9C;
}
}
#pragma pop
