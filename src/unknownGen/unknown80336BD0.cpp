#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80336F04();
extern void *lbl_805360A4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80336BD0(void *object){
 fn_80336F04();
 return fn_8006546C(lbl_805360A4,object);
}
void *fn_80336C10(){
 if(!lbl_805360A4) lbl_805360A4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805360A4;
}
void *fn_80336C64(){
 if(!lbl_805360A4 || !(reinterpret_cast<unsigned int *>(lbl_805360A4)[0x24/4]&4)) fn_80336F04();
 return lbl_805360A4;
}
}
#pragma pop
