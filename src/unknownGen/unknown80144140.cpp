#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_801442C4();
extern void *lbl_805621F4;
extern void *lbl_805640FC;
}
extern "C" {
void *fn_80144140(void *object){
 fn_801442C4();
 return fn_8006546C(lbl_805640FC,object);
}
void *fn_80144178(){
 if(!lbl_805640FC) lbl_805640FC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805640FC;
}
void *fn_801441B4(){
 if(!lbl_805640FC || !(reinterpret_cast<unsigned int *>(lbl_805640FC)[0x24/4]&4)) fn_801442C4();
 return lbl_805640FC;
}
}
#pragma pop
