#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802B6B20();
extern void *lbl_80534680;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B68E8(void *object){
 fn_802B6B20();
 return fn_8006546C(lbl_80534680,object);
}
void *fn_802B6928(){
 if(!lbl_80534680) lbl_80534680=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534680;
}
void *beTextureCtrl_getMeta(){
 if(!lbl_80534680 || !(reinterpret_cast<unsigned int *>(lbl_80534680)[0x24/4]&4)) fn_802B6B20();
 return lbl_80534680;
}
}
#pragma pop
