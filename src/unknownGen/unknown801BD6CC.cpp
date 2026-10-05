#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_801BD904();
extern void *lbl_805621F4;
extern void *lbl_80564E3C;
}
extern "C" {
void *fn_801BD6CC(){
 if(!lbl_80564E3C) lbl_80564E3C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80564E3C;
}
void *fn_801BD708(){
 if(!lbl_80564E3C || !(reinterpret_cast<unsigned int *>(lbl_80564E3C)[0x24/4]&4)) fn_801BD904();
 return lbl_80564E3C;
}
}
#pragma pop
