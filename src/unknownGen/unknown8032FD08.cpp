#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl10_getMeta();
void beNDMWShopCtrl10_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrl00_arkRegister();
extern char beNDMWShopCtrl10_className[];
extern char beNDMWShopCtrl10_fieldTypes[];
extern char beNDMWShopCtrl10_fieldNames[];
extern char beNDMWShopCtrl10_fieldStorage[];
extern char beNDMWShopCtrl10_fieldOffsets[];
extern void *beNDMWShopCtrl10_meta;
extern void *beNDMWShopCtrl00_meta;
void beNDMWShopCtrl10_register();
void *beNDMWShopCtrl10_getMetaCall();
void beNDMWShopCtrl10_fieldInit();
}
extern "C" {
void beNDMWShopCtrl10_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrl10_register);
}
void beNDMWShopCtrl10_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrl10_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl10_getMetaCall,(int)beNDMWShopCtrl10_className,92,(int)beNDMWShopCtrl10_vtableRead,(int)beNDMWShopCtrl10_fieldInit,0,0);
}
void *beNDMWShopCtrl10_getMetaCall(){return beNDMWShopCtrl10_getMeta();}
void beNDMWShopCtrl10_fieldInit(){
 void *meta=beNDMWShopCtrl10_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWShopCtrl10_fieldTypes,0x2);
 meta_setupFields(meta,beNDMWShopCtrl10_fieldNames,beNDMWShopCtrl10_fieldStorage,beNDMWShopCtrl10_fieldOffsets,field);
}
void *beNDMWShopCtrl00_create(void *object){
 beNDMWShopCtrl00_arkRegister();
 return meta_createInstance(beNDMWShopCtrl00_meta,object);
}
void *beNDMWShopCtrl00_getMeta(){
 if(!beNDMWShopCtrl00_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl00_meta)[0x24/4]&4)) beNDMWShopCtrl00_arkRegister();
 return beNDMWShopCtrl00_meta;
}
}
#pragma pop
