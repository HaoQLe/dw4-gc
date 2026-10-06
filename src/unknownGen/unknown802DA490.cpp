#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802DA748();
extern void *lbl_80535398;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DA490(void *object){
 fn_802DA748();
 return fn_8006546C(lbl_80535398,object);
}
void *fn_802DA4D0(){
 if(!lbl_80535398) lbl_80535398=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535398;
}
void *fn_802DA524(){
 if(!lbl_80535398 || !(reinterpret_cast<unsigned int *>(lbl_80535398)[0x24/4]&4)) fn_802DA748();
 return lbl_80535398;
}
}
#pragma pop
