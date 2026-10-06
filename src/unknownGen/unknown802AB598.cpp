#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802A9C04();
void fn_802A9C08();
void fn_802AB744();
extern void *lbl_805343AC;
extern void *lbl_805621F4;
}
extern "C" {
void fn_802AB598(){return fn_802A9C04();}
void fn_802AB5B8(){return fn_802A9C08();}
void *fn_802AB5D8(void *object){
 fn_802AB744();
 return fn_8006546C(lbl_805343AC,object);
}
void *fn_802AB618(){
 if(!lbl_805343AC) lbl_805343AC=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805343AC;
}
void *fn_802AB66C(){
 if(!lbl_805343AC || !(reinterpret_cast<unsigned int *>(lbl_805343AC)[0x24/4]&4)) fn_802AB744();
 return lbl_805343AC;
}
}
#pragma pop
