#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWTitle2_arkRegister();
extern char lbl_80453438[];
extern char lbl_804E196C[];
extern char lbl_804E1974[];
extern void *lbl_80535D28;
extern void *beNDMWTitle2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80326780(){
 if(!lbl_80535D28) lbl_80535D28=fn_800635C8(lbl_80453438,lbl_804E196C,lbl_804E1974,0x2);
 return lbl_80535D28;
}
}
#pragma pop
