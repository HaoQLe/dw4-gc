#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_80338624();
extern void *lbl_80536158;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80338420(void *object){
 fn_80338624();
 return fn_8006546C(lbl_80536158,object);
}
void *fn_80338460(){
 if(!lbl_80536158) lbl_80536158=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536158;
}
void *beNDMWMdlPlayer2_getMeta(){
 if(!lbl_80536158 || !(reinterpret_cast<unsigned int *>(lbl_80536158)[0x24/4]&4)) fn_80338624();
 return lbl_80536158;
}
}
#pragma pop
