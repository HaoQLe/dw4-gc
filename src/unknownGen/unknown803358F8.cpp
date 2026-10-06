#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *fn_8006546C(void *,void *);
void fn_80335B90();
extern char lbl_80453438[];
extern char lbl_804E22C0[];
extern char lbl_804E22DC[];
extern void *lbl_80536050;
extern void *lbl_80536054;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803358F8(){
 if(!lbl_80536050) lbl_80536050=fn_800635C8(lbl_80453438,lbl_804E22C0,lbl_804E22DC,0x7);
 return lbl_80536050;
}
void *fn_80335958(void *object){
 fn_80335B90();
 return fn_8006546C(lbl_80536054,object);
}
void *fn_80335998(){
 if(!lbl_80536054) lbl_80536054=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80536054;
}
void *fn_803359EC(){
 if(!lbl_80536054 || !(reinterpret_cast<unsigned int *>(lbl_80536054)[0x24/4]&4)) fn_80335B90();
 return lbl_80536054;
}
}
#pragma pop
