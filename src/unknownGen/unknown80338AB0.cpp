#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beNDMWMdlPlayer_arkRegister();
extern char lbl_80454368[];
extern char beNDMWMdlPlayer2InfoWork_fieldTypes[];
extern char beNDMWMdlPlayer2InfoWork_fieldNames[];
extern char beNDMWMdlPlayer2InfoWork_fieldStorage[];
extern char beNDMWMdlPlayer2InfoWork_fieldOffsets[];
extern char lbl_804E2738[];
extern char lbl_804E2754[];
extern void *beNDMWMdlPlayer2InfoWork_meta;
extern void *lbl_80536174;
extern void *beNDMWMdlPlayer_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80338AB0(){
 if(!lbl_80536174) lbl_80536174=fn_800635C8(lbl_80454368,lbl_804E2738,lbl_804E2754,0x7);
 return lbl_80536174;
}
}
#pragma pop
