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
