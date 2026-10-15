#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusCtrlEquip_getMeta();
void beNDMWStatusCtrlEquip_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWStatusCtrlD0_arkRegister();
extern char beNDMWStatusCtrlEquip_className[];
extern char beNDMWStatusCtrlEquip_fieldTypes[];
extern char beNDMWStatusCtrlEquip_fieldNames[];
extern char beNDMWStatusCtrlEquip_fieldStorage[];
extern char beNDMWStatusCtrlEquip_fieldOffsets[];
extern void *beNDMWStatusCtrlEquip_meta;
extern void *beNDMWStatusCtrlD0_meta;
void beNDMWStatusCtrlEquip_register();
void *beNDMWStatusCtrlEquip_getMetaCall();
void beNDMWStatusCtrlEquip_fieldInit();
}
extern "C" {
void beNDMWStatusCtrlEquip_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrlEquip_register);
}
void beNDMWStatusCtrlEquip_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWStatusCtrlEquip_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlEquip_getMetaCall,(int)beNDMWStatusCtrlEquip_className,88,(int)beNDMWStatusCtrlEquip_vtableRead,(int)beNDMWStatusCtrlEquip_fieldInit,0,0);
}
void *beNDMWStatusCtrlEquip_getMetaCall(){return beNDMWStatusCtrlEquip_getMeta();}
void beNDMWStatusCtrlEquip_fieldInit(){
 void *meta=beNDMWStatusCtrlEquip_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWStatusCtrlEquip_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWStatusCtrlEquip_fieldNames,beNDMWStatusCtrlEquip_fieldStorage,beNDMWStatusCtrlEquip_fieldOffsets,field);
}
void *beNDMWStatusCtrlD0_create(void *object){
 beNDMWStatusCtrlD0_arkRegister();
 return meta_createInstance(beNDMWStatusCtrlD0_meta,object);
}
void *beNDMWStatusCtrlD0_getMeta(){
 if(!beNDMWStatusCtrlD0_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlD0_meta)[0x24/4]&4)) beNDMWStatusCtrlD0_arkRegister();
 return beNDMWStatusCtrlD0_meta;
}
}
#pragma pop
