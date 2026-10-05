#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_800289F8();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
extern void *lbl_805616E8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_800288BC(){
 if(!lbl_805616E8) lbl_805616E8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805616E8;
}
void *fn_800288F8(){
 if(!lbl_805616E8 || !(reinterpret_cast<unsigned int *>(lbl_805616E8)[0x24/4]&4)) fn_800289F8();
 return lbl_805616E8;
}
}
#pragma pop
