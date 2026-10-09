#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802DB298();
extern void *lbl_805353E4;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802DB078(void *object){
 fn_802DB298();
 return fn_8006546C(lbl_805353E4,object);
}
void *fn_802DB0B8(){
 if(!lbl_805353E4) lbl_805353E4=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_805353E4;
}
void *beDemoManager_getMeta(){
 if(!lbl_805353E4 || !(reinterpret_cast<unsigned int *>(lbl_805353E4)[0x24/4]&4)) fn_802DB298();
 return lbl_805353E4;
}
}
#pragma pop
