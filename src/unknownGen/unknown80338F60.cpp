#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_803393C0();
extern void *lbl_80536188;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80338F60(void *object){
 fn_803393C0();
 return fn_8006546C(lbl_80536188,object);
}
void *fn_80338FA0(){
 if(!lbl_80536188) lbl_80536188=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536188;
}
void *fn_80338FF4(){
 if(!lbl_80536188 || !(reinterpret_cast<unsigned int *>(lbl_80536188)[0x24/4]&4)) fn_803393C0();
 return lbl_80536188;
}
}
#pragma pop
