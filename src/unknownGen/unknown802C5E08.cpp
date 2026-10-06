#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802C6198();
extern void *lbl_80534C50;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C5E08(void *object){
 fn_802C6198();
 return fn_8006546C(lbl_80534C50,object);
}
void *fn_802C5E48(){
 if(!lbl_80534C50) lbl_80534C50=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534C50;
}
void *fn_802C5E9C(){
 if(!lbl_80534C50 || !(reinterpret_cast<unsigned int *>(lbl_80534C50)[0x24/4]&4)) fn_802C6198();
 return lbl_80534C50;
}
}
#pragma pop
