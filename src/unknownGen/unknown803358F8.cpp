#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWSaveIntf_arkRegister();
extern char lbl_80453438[];
extern char lbl_804E22C0[];
extern char lbl_804E22DC[];
extern void *lbl_80536050;
extern void *beNDMWSaveIntf_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803358F8(){
 if(!lbl_80536050) lbl_80536050=fn_800635C8(lbl_80453438,lbl_804E22C0,lbl_804E22DC,0x7);
 return lbl_80536050;
}
}
#pragma pop
