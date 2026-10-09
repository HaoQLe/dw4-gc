#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_8006546C(void *,void *);
void fn_802C7F00();
extern void *lbl_80534D88;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802C7D94(void *object){
 fn_802C7F00();
 return fn_8006546C(lbl_80534D88,object);
}
void *fn_802C7DD4(){
 if(!lbl_80534D88) lbl_80534D88=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534D88;
}
void *beModelCtrlInfoAI_getMeta(){
 if(!lbl_80534D88 || !(reinterpret_cast<unsigned int *>(lbl_80534D88)[0x24/4]&4)) fn_802C7F00();
 return lbl_80534D88;
}
}
#pragma pop
