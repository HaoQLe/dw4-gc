#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801C71C0();
extern void *lbl_805621F4;
extern void *lbl_805652BC;
}
extern "C" {
void *fn_801C6F04(void *object){
 fn_801C71C0();
 return fn_8006546C(lbl_805652BC,object);
}
void *fn_801C6F3C(){
 if(!lbl_805652BC) lbl_805652BC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805652BC;
}
void *igBlendMatrixSelect_getMeta(){
 if(!lbl_805652BC || !(reinterpret_cast<unsigned int *>(lbl_805652BC)[0x24/4]&4)) fn_801C71C0();
 return lbl_805652BC;
}
}
#pragma pop
