#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *fn_800365B4();
void *fn_800635C8(void *,void *,void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWMdlPEBaseInfoWork_arkRegister();
extern char lbl_80454460[];
extern char lbl_804544CC[];
extern char lbl_804545A0[];
extern char beNDMWMdlPEBase_className[];
extern char beNDMWMdlPlayerInfoWork_fieldTypes[];
extern char beNDMWMdlPlayerInfoWork_fieldNames[];
extern char beNDMWMdlPlayerInfoWork_fieldStorage[];
extern char beNDMWMdlPlayerInfoWork_fieldOffsets[];
extern char lbl_804E2838[];
extern char lbl_804E2860[];
extern char lbl_804E2888[];
extern char lbl_804E28B4[];
extern char lbl_804E28E0[];
extern char lbl_804E2920[];
extern void *beNDMWMdlPlayerInfoWork_meta;
extern void *lbl_805361AC;
extern void *lbl_805361B0;
extern void *lbl_805361B4;
extern void *beNDMWMdlPEBase_meta;
extern void *beNDMWMdlPEBaseInfoWork_meta;
void *beNDMWMdlPEBase_getMeta();
void beNDMWMdlPEBase_arkRegister();
void beNDMWMdlPEBase_register();
void *beNDMWMdlPEBase_getMetaCall();
}
extern "C" {
void *fn_80339534(){
 if(!lbl_805361AC) lbl_805361AC=fn_800635C8(lbl_80454460,lbl_804E2838,lbl_804E2860,0xA);
 return lbl_805361AC;
}
void *fn_80339594(){
 if(!lbl_805361B0) lbl_805361B0=fn_800635C8(lbl_804544CC,lbl_804E2888,lbl_804E28B4,0xB);
 return lbl_805361B0;
}
void *fn_803395F4(){
 if(!lbl_805361B4) lbl_805361B4=fn_800635C8(lbl_804545A0,lbl_804E28E0,lbl_804E2920,0x10);
 return lbl_805361B4;
}
}
#pragma pop
