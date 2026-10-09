#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802DF9F8();
extern void *lbl_80535570;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DF8D0(void *object){
 fn_802DF9F8();
 return fn_8006546C(lbl_80535570,object);
}
void *fn_802DF910(){
 if(!lbl_80535570) lbl_80535570=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535570;
}
void *beCriSndf_getMeta(){
 if(!lbl_80535570 || !(reinterpret_cast<unsigned int *>(lbl_80535570)[0x24/4]&4)) fn_802DF9F8();
 return lbl_80535570;
}
}
#pragma pop
