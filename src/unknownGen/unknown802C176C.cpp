#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802C194C();
extern void *lbl_80534A84;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C176C(void *object){
 fn_802C194C();
 return fn_8006546C(lbl_80534A84,object);
}
void *fn_802C17AC(){
 if(!lbl_80534A84) lbl_80534A84=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534A84;
}
void *fn_802C1800(){
 if(!lbl_80534A84 || !(reinterpret_cast<unsigned int *>(lbl_80534A84)[0x24/4]&4)) fn_802C194C();
 return lbl_80534A84;
}
}
#pragma pop
