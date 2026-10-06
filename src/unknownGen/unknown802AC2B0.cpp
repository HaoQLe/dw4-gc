#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802AC404();
extern void *lbl_80534404;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802AC2B0(void *object){
 fn_802AC404();
 return fn_8006546C(lbl_80534404,object);
}
void *fn_802AC2F0(){
 if(!lbl_80534404) lbl_80534404=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534404;
}
void *fn_802AC344(){
 if(!lbl_80534404 || !(reinterpret_cast<unsigned int *>(lbl_80534404)[0x24/4]&4)) fn_802AC404();
 return lbl_80534404;
}
}
#pragma pop
