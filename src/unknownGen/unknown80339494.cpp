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
void beNDMWMdlPlayerInfoWork_fieldInit(){
 void *value0=beNDMWMdlPlayerInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWMdlPlayerInfoWork_fieldTypes,8);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800365B4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beNDMWMdlPlayerInfoWork_fieldNames,beNDMWMdlPlayerInfoWork_fieldStorage,beNDMWMdlPlayerInfoWork_fieldOffsets,value1);
}
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
void *beNDMWMdlPEBase_getMeta(){
 if(!beNDMWMdlPEBase_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPEBase_meta)[0x24/4]&4)) beNDMWMdlPEBase_arkRegister();
 return beNDMWMdlPEBase_meta;
}
void beNDMWMdlPEBase_arkRegister(){
 meta_registerNow((int)beNDMWMdlPEBase_register);
}
void beNDMWMdlPEBase_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWMdlPEBase_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlPEBase_getMetaCall,(int)beNDMWMdlPEBase_className,44,0,0,0,0);
}
void *beNDMWMdlPEBase_getMetaCall(){return beNDMWMdlPEBase_getMeta();}
void *beNDMWMdlPEBaseInfoWork_getMeta(){
 if(!beNDMWMdlPEBaseInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPEBaseInfoWork_meta)[0x24/4]&4)) beNDMWMdlPEBaseInfoWork_arkRegister();
 return beNDMWMdlPEBaseInfoWork_meta;
}
}
#pragma pop
