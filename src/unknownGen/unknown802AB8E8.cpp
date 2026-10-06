#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802ABA3C();
extern void *lbl_805343D4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802AB8E8(void *object){
 fn_802ABA3C();
 return fn_8006546C(lbl_805343D4,object);
}
void *fn_802AB928(){
 if(!lbl_805343D4) lbl_805343D4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805343D4;
}
void *fn_802AB97C(){
 if(!lbl_805343D4 || !(reinterpret_cast<unsigned int *>(lbl_805343D4)[0x24/4]&4)) fn_802ABA3C();
 return lbl_805343D4;
}
}
#pragma pop
