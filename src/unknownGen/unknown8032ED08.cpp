#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl50_getMeta();
void beNDMWShopCtrl50_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrl40_arkRegister();
extern char beNDMWShopCtrl50_className[];
extern char beNDMWShopCtrl50_fieldTypes[];
extern char beNDMWShopCtrl50_fieldNames[];
extern char beNDMWShopCtrl50_fieldStorage[];
extern char beNDMWShopCtrl50_fieldOffsets[];
extern void *beNDMWShopCtrl50_meta;
extern void *beNDMWShopCtrl40_meta;
void beNDMWShopCtrl50_register();
void *beNDMWShopCtrl50_getMetaCall();
void beNDMWShopCtrl50_fieldInit();
}
extern "C" {
void beNDMWShopCtrl50_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrl50_register);
}
void beNDMWShopCtrl50_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrl50_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl50_getMetaCall,(int)beNDMWShopCtrl50_className,104,(int)beNDMWShopCtrl50_vtableRead,(int)beNDMWShopCtrl50_fieldInit,0,0);
}
void *beNDMWShopCtrl50_getMetaCall(){return beNDMWShopCtrl50_getMeta();}
void beNDMWShopCtrl50_fieldInit(){
 void *meta=beNDMWShopCtrl50_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWShopCtrl50_fieldTypes,0x5);
 meta_setupFields(meta,beNDMWShopCtrl50_fieldNames,beNDMWShopCtrl50_fieldStorage,beNDMWShopCtrl50_fieldOffsets,field);
}
void *beNDMWShopCtrl40_create(void *object){
 beNDMWShopCtrl40_arkRegister();
 return meta_createInstance(beNDMWShopCtrl40_meta,object);
}
void *beNDMWShopCtrl40_getMeta(){
 if(!beNDMWShopCtrl40_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl40_meta)[0x24/4]&4)) beNDMWShopCtrl40_arkRegister();
 return beNDMWShopCtrl40_meta;
}
}
#pragma pop
