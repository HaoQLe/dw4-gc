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
