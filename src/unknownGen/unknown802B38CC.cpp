#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802B3A20();
extern void *lbl_80534564;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B38CC(void *object){
 fn_802B3A20();
 return fn_8006546C(lbl_80534564,object);
}
void *fn_802B390C(){
 if(!lbl_80534564) lbl_80534564=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534564;
}
void *fn_802B3960(){
 if(!lbl_80534564 || !(reinterpret_cast<unsigned int *>(lbl_80534564)[0x24/4]&4)) fn_802B3A20();
 return lbl_80534564;
}
}
#pragma pop
