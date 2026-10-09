#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802B58D8();
extern void *lbl_80534630;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802B56F8(void *object){
 fn_802B58D8();
 return fn_8006546C(lbl_80534630,object);
}
void *fn_802B5738(){
 if(!lbl_80534630) lbl_80534630=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534630;
}
void *beTimer_getMeta(){
 if(!lbl_80534630 || !(reinterpret_cast<unsigned int *>(lbl_80534630)[0x24/4]&4)) fn_802B58D8();
 return lbl_80534630;
}
}
#pragma pop
