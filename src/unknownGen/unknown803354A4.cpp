#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSaveIntfComMdlData_getMeta();
void beSaveIntfComMdlData_vtableRead();
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWSaveIntfCtrlData_arkRegister();
void igObject_register();
extern char beSaveIntfComMdlData_className[];
extern char beSaveIntfComMdlData_fieldTypes[];
extern char beSaveIntfComMdlData_fieldNames[];
extern char beSaveIntfComMdlData_fieldStorage[];
extern char beSaveIntfComMdlData_fieldOffsets[];
extern void *beSaveIntfComMdlData_meta;
extern void *beNDMWSaveIntfCtrlData_meta;
void beSaveIntfComMdlData_register();
void *beSaveIntfComMdlData_getMetaCall();
void beSaveIntfComMdlData_fieldInit();
}
extern "C" {
void beSaveIntfComMdlData_arkRegister(){
 meta_registerNow((int)beSaveIntfComMdlData_register);
}
void beSaveIntfComMdlData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beSaveIntfComMdlData_meta,(int)igObject_register,(int)fn_800237D0,(int)beSaveIntfComMdlData_getMetaCall,(int)beSaveIntfComMdlData_className,20,(int)beSaveIntfComMdlData_vtableRead,(int)beSaveIntfComMdlData_fieldInit,0,0);
}
void *beSaveIntfComMdlData_getMetaCall(){return beSaveIntfComMdlData_getMeta();}
void beSaveIntfComMdlData_fieldInit(){
 void *meta=beSaveIntfComMdlData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beSaveIntfComMdlData_fieldTypes,0x3);
 meta_setupFields(meta,beSaveIntfComMdlData_fieldNames,beSaveIntfComMdlData_fieldStorage,beSaveIntfComMdlData_fieldOffsets,field);
}
void *beNDMWSaveIntfCtrlData_create(void *object){
 beNDMWSaveIntfCtrlData_arkRegister();
 return meta_createInstance(beNDMWSaveIntfCtrlData_meta,object);
}
void *beNDMWSaveIntfCtrlData_getMeta(){
 if(!beNDMWSaveIntfCtrlData_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveIntfCtrlData_meta)[0x24/4]&4)) beNDMWSaveIntfCtrlData_arkRegister();
 return beNDMWSaveIntfCtrlData_meta;
}
}
#pragma pop
