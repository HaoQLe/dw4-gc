#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802BD6B0();
extern void *lbl_8053490C;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BD440(void *object){
 fn_802BD6B0();
 return fn_8006546C(lbl_8053490C,object);
}
void *fn_802BD480(){
 if(!lbl_8053490C) lbl_8053490C=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_8053490C;
}
void *fn_802BD4D4(){
 if(!lbl_8053490C || !(reinterpret_cast<unsigned int *>(lbl_8053490C)[0x24/4]&4)) fn_802BD6B0();
 return lbl_8053490C;
}
}
#pragma pop
