#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusCtrl00_getMeta();
void beNDMWStatusCtrl00_vtableRead();
void beNDMWWindow_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803287A8();
void *fn_8032B8A4();
void beNDMWStatus_arkRegister();
extern char lbl_80453438[];
extern char beNDMWStatusCtrl00_className[];
extern char beNDMWListCtrl_className[];
extern char beNDMWWindowCtrl_className[];
extern char beNDMWStatusCtrl00_fieldTypes[];
extern char beNDMWStatusCtrl00_fieldNames[];
extern char beNDMWStatusCtrl00_fieldStorage[];
extern char beNDMWStatusCtrl00_fieldOffsets[];
extern char beNDMWListCtrl_fieldTypes[];
extern char beNDMWListCtrl_fieldNames[];
extern char beNDMWListCtrl_fieldStorage[];
extern char beNDMWListCtrl_fieldOffsets[];
extern char beNDMWWindowCtrl_fieldTypes[];
extern char beNDMWWindowCtrl_fieldNames[];
extern char beNDMWWindowCtrl_fieldStorage[];
extern char beNDMWWindowCtrl_fieldOffsets[];
extern char lbl_804E20B4[];
extern char lbl_804E20D0[];
extern void *beNDMWStatusCtrl00_meta;
extern void *beNDMWListCtrl_meta;
extern void *beNDMWWindowCtrl_meta;
extern void *lbl_80535FB4;
extern void *beNDMWStatus_meta;
extern void *lbl_805621F4;
void beNDMWStatusCtrl00_register();
void *beNDMWStatusCtrl00_getMetaCall();
void beNDMWStatusCtrl00_fieldInit();
void *beNDMWListCtrl_getMeta();
void beNDMWListCtrl_arkRegister();
void beNDMWListCtrl_register();
void *beNDMWListCtrl_getMetaCall();
void beNDMWListCtrl_fieldInit();
void *beNDMWWindowCtrl_getMeta();
void beNDMWWindowCtrl_arkRegister();
void beNDMWWindowCtrl_register();
void *beNDMWWindowCtrl_getMetaCall();
void beNDMWWindowCtrl_fieldInit();
}
extern "C" {
void beNDMWStatusCtrl00_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrl00_register);
}
void beNDMWStatusCtrl00_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWStatusCtrl00_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrl00_getMetaCall,(int)beNDMWStatusCtrl00_className,88,(int)beNDMWStatusCtrl00_vtableRead,(int)beNDMWStatusCtrl00_fieldInit,0,0);
}
void *beNDMWStatusCtrl00_getMetaCall(){return beNDMWStatusCtrl00_getMeta();}
void beNDMWStatusCtrl00_fieldInit(){
 void *meta=beNDMWStatusCtrl00_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWStatusCtrl00_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWStatusCtrl00_fieldNames,beNDMWStatusCtrl00_fieldStorage,beNDMWStatusCtrl00_fieldOffsets,field);
}
void *beNDMWListCtrl_getMeta(){
 if(!beNDMWListCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWListCtrl_meta)[0x24/4]&4)) beNDMWListCtrl_arkRegister();
 return beNDMWListCtrl_meta;
}
void beNDMWListCtrl_arkRegister(){
 meta_registerNow((int)beNDMWListCtrl_register);
}
void beNDMWListCtrl_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWListCtrl_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWListCtrl_getMetaCall,(int)beNDMWListCtrl_className,96,0,(int)beNDMWListCtrl_fieldInit,0,0);
}
void *beNDMWListCtrl_getMetaCall(){return beNDMWListCtrl_getMeta();}
void beNDMWListCtrl_fieldInit(){
 void *meta=beNDMWListCtrl_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWListCtrl_fieldTypes,0x3);
 meta_setupFields(meta,beNDMWListCtrl_fieldNames,beNDMWListCtrl_fieldStorage,beNDMWListCtrl_fieldOffsets,field);
}
void *beNDMWWindowCtrl_metaObject(){
 if(!beNDMWWindowCtrl_meta) beNDMWWindowCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWWindowCtrl_meta;
}
void *beNDMWWindowCtrl_getMeta(){
 if(!beNDMWWindowCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWWindowCtrl_meta)[0x24/4]&4)) beNDMWWindowCtrl_arkRegister();
 return beNDMWWindowCtrl_meta;
}
void beNDMWWindowCtrl_arkRegister(){
 meta_registerNow((int)beNDMWWindowCtrl_register);
}
void beNDMWWindowCtrl_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWWindowCtrl_meta,(int)beNDMWWindow_register,(int)fn_803287A8,(int)beNDMWWindowCtrl_getMetaCall,(int)beNDMWWindowCtrl_className,84,0,(int)beNDMWWindowCtrl_fieldInit,0,0);
}
void *beNDMWWindowCtrl_getMetaCall(){return beNDMWWindowCtrl_getMeta();}
void beNDMWWindowCtrl_fieldInit(){
 void *meta=beNDMWWindowCtrl_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWWindowCtrl_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWWindowCtrl_fieldNames,beNDMWWindowCtrl_fieldStorage,beNDMWWindowCtrl_fieldOffsets,field);
}
void *fn_80334024(){
 if(!lbl_80535FB4) lbl_80535FB4=fn_800635C8(lbl_80453438,lbl_804E20B4,lbl_804E20D0,0x7);
 return lbl_80535FB4;
}
void *beNDMWStatus_create(void *object){
 beNDMWStatus_arkRegister();
 return meta_createInstance(beNDMWStatus_meta,object);
}
void *beNDMWStatus_metaObject(){
 if(!beNDMWStatus_meta) beNDMWStatus_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWStatus_meta;
}
void *beNDMWStatus_getMeta(){
 if(!beNDMWStatus_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatus_meta)[0x24/4]&4)) beNDMWStatus_arkRegister();
 return beNDMWStatus_meta;
}
}
#pragma pop
