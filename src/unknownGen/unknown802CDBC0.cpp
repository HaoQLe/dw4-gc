#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_802CDE10();
extern char lbl_8041CA68[];
extern char lbl_804D130C[];
extern char lbl_804D132C[];
extern void *lbl_80534FB4;
extern void *lbl_80534FB8;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CDBC0(){
 if(!lbl_80534FB4) lbl_80534FB4=fn_800635C8(lbl_8041CA68,lbl_804D130C,lbl_804D132C,0x8);
 return lbl_80534FB4;
}
void *fn_802CDC20(void *object){
 fn_802CDE10();
 return fn_8006546C(lbl_80534FB8,object);
}
void *fn_802CDC60(){
 if(!lbl_80534FB8) lbl_80534FB8=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534FB8;
}
void *beMeterCtrl_getMeta(){
 if(!lbl_80534FB8 || !(reinterpret_cast<unsigned int *>(lbl_80534FB8)[0x24/4]&4)) fn_802CDE10();
 return lbl_80534FB8;
}
}
#pragma pop
