#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusCtrlFolder_getMeta();
void beNDMWStatusCtrlFolder_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWStatusSubSlot_arkRegister();
extern char beNDMWStatusCtrlFolder_className[];
extern char beNDMWStatusCtrlFolder_fieldTypes[];
extern char beNDMWStatusCtrlFolder_fieldNames[];
extern char beNDMWStatusCtrlFolder_fieldStorage[];
extern char beNDMWStatusCtrlFolder_fieldOffsets[];
extern void *beNDMWStatusCtrlFolder_meta;
extern void *beNDMWStatusSubSlot_meta;
void beNDMWStatusCtrlFolder_register();
void *beNDMWStatusCtrlFolder_getMetaCall();
void beNDMWStatusCtrlFolder_fieldInit();
}
extern "C" {
void beNDMWStatusCtrlFolder_arkRegister(){
 meta_registerNow((int)beNDMWStatusCtrlFolder_register);
}
void beNDMWStatusCtrlFolder_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWStatusCtrlFolder_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWStatusCtrlFolder_getMetaCall,(int)beNDMWStatusCtrlFolder_className,88,(int)beNDMWStatusCtrlFolder_vtableRead,(int)beNDMWStatusCtrlFolder_fieldInit,0,0);
}
void *beNDMWStatusCtrlFolder_getMetaCall(){return beNDMWStatusCtrlFolder_getMeta();}
void beNDMWStatusCtrlFolder_fieldInit(){
 void *meta=beNDMWStatusCtrlFolder_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWStatusCtrlFolder_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWStatusCtrlFolder_fieldNames,beNDMWStatusCtrlFolder_fieldStorage,beNDMWStatusCtrlFolder_fieldOffsets,field);
}
void *beNDMWStatusSubSlot_create(void *object){
 beNDMWStatusSubSlot_arkRegister();
 return meta_createInstance(beNDMWStatusSubSlot_meta,object);
}
void *beNDMWStatusSubSlot_getMeta(){
 if(!beNDMWStatusSubSlot_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSubSlot_meta)[0x24/4]&4)) beNDMWStatusSubSlot_arkRegister();
 return beNDMWStatusSubSlot_meta;
}
}
#pragma pop
