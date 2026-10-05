#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_8013B5C0();
void *fn_80182E70();
extern void *lbl_805621F4;
extern void *lbl_80563EB8;
}
extern "C" {
void *fn_8013B3D8(){return fn_80182E70();}
void *fn_8013B3F8(){
 if(!lbl_80563EB8) lbl_80563EB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80563EB8;
}
void *fn_8013B434(){
 if(!lbl_80563EB8 || !(reinterpret_cast<unsigned int *>(lbl_80563EB8)[0x24/4]&4)) fn_8013B5C0();
 return lbl_80563EB8;
}
}
#pragma pop
