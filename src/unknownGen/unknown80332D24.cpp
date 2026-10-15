#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusPowerSocket_getMeta();
void beNDMWStatusPowerSocket_vtableRead();
void beNDMWWindowCtrl_register();
void fn_80053650(void *,int);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *beDataObjList_metaObject();
void fn_803250AC();
void *fn_8032B8A4();
void *fn_80332910();
void beNDMWStatusCtrlEquip_arkRegister();
void *beNDMWItemBaseList_metaObject();
extern char beNDMWStatusPowerSocket_className[];
extern char beNDMWStatusCtrlBaseEquip_className[];
extern char beNDMWStatusCtrlBaseEquip_dependencies[];
extern char beNDMWStatusCtrlBaseEquip_fieldTypes[];
extern char beNDMWStatusCtrlBaseEquip_fieldNames[];
extern char beNDMWStatusCtrlBaseEquip_fieldStorage[];
extern char beNDMWStatusCtrlBaseEquip_fieldOffsets[];
extern char beNDMWStatusPowerSocket_meta[];
extern void *beNDMWStatusCtrlBaseEquip_meta;
extern void *beNDMWStatusCtrlEquip_meta;
void beNDMWStatusPowerSocket_register();
void *beNDMWStatusPowerSocket_getMetaCall();
void *beNDMWStatusCtrlBaseEquip_getMeta();
void beNDMWStatusCtrlBaseEquip_arkRegister();
void beNDMWStatusCtrlBaseEquip_register();
void *beNDMWStatusCtrlBaseEquip_getMetaCall();
void beNDMWStatusCtrlBaseEquip_fieldInit();
}
extern "C" {
void beNDMWStatusPowerSocket_arkRegister(){
 meta_registerNow((int)beNDMWStatusPowerSocket_register);
}
void beNDMWStatusPowerSocket_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusPowerSocket_meta,(int)beNDMWStatusCtrlBaseEquip_register,(int)fn_80332910,(int)beNDMWStatusPowerSocket_getMetaCall,(int)beNDMWStatusPowerSocket_className,124,(int)beNDMWStatusPowerSocket_vtableRead,0,0,0);
}
void *beNDMWStatusPowerSocket_getMetaCall(){return beNDMWStatusPowerSocket_getMeta();}
void *beNDMWStatusCtrlBaseEquip_getMeta(){
 if(!beNDMWStatusCtrlBaseEquip_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlBaseEquip_meta)[0x24/4]&4)) beNDMWStatusCtrlBaseEquip_arkRegister();
 return beNDMWStatusCtrlBaseEquip_meta;
}
void beNDMWStatusCtrlBaseEquip_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrlBaseEquip_register);
}
void beNDMWStatusCtrlBaseEquip_register(){
 fn_803250AC();
 meta_registerClass(1,(int)&beNDMWStatusCtrlBaseEquip_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlBaseEquip_getMetaCall,(int)beNDMWStatusCtrlBaseEquip_className,124,0,(int)beNDMWStatusCtrlBaseEquip_fieldInit,0,(int)beNDMWStatusCtrlBaseEquip_dependencies);
}
void *beNDMWStatusCtrlBaseEquip_getMetaCall(){return beNDMWStatusCtrlBaseEquip_getMeta();}
void beNDMWStatusCtrlBaseEquip_fieldInit(){
 void *value0=beNDMWStatusCtrlBaseEquip_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWStatusCtrlBaseEquip_fieldTypes,10);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+3));
 void *value4=beDataObjList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 void *value5=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value6=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value5)+56)=value6;
 void *value7=meta_field(value0,(reinterpret_cast<char *>(value1)+5));
 void *value8=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value7)+56)=value8;
 void *value9=meta_field(value0,(reinterpret_cast<char *>(value1)+6));
 void *value10=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value9)+56)=value10;
 void *value11=meta_field(value0,(reinterpret_cast<char *>(value1)+7));
 void *value12=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value11)+56)=value12;
 void *value13=meta_field(value0,(reinterpret_cast<char *>(value1)+8));
 void *value14=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value13)+56)=value14;
 void *value15=meta_field(value0,(reinterpret_cast<char *>(value1)+9));
 void *value16=beNDMWItemBaseList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value15)+56)=value16;
 meta_setupFields(value0,beNDMWStatusCtrlBaseEquip_fieldNames,beNDMWStatusCtrlBaseEquip_fieldStorage,beNDMWStatusCtrlBaseEquip_fieldOffsets,value1);
}
void *beNDMWStatusCtrlEquip_create(void *object){
 beNDMWStatusCtrlEquip_arkRegister();
 return meta_createInstance(beNDMWStatusCtrlEquip_meta,object);
}
void *beNDMWStatusCtrlEquip_getMeta(){
 if(!beNDMWStatusCtrlEquip_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlEquip_meta)[0x24/4]&4)) beNDMWStatusCtrlEquip_arkRegister();
 return beNDMWStatusCtrlEquip_meta;
}
}
#pragma pop
