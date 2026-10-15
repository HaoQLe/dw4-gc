#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl40_getMeta();
void beNDMWShopCtrl40_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrl30_arkRegister();
extern char beNDMWShopCtrl40_className[];
extern char beNDMWShopCtrl40_fieldTypes[];
extern char beNDMWShopCtrl40_fieldNames[];
extern char beNDMWShopCtrl40_fieldStorage[];
extern char beNDMWShopCtrl40_fieldOffsets[];
extern void *beNDMWShopCtrl40_meta;
extern void *beNDMWShopCtrl30_meta;
void beNDMWShopCtrl40_register();
void *beNDMWShopCtrl40_getMetaCall();
void beNDMWShopCtrl40_fieldInit();
}
extern "C" {
void beNDMWShopCtrl40_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrl40_register);
}
void beNDMWShopCtrl40_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrl40_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl40_getMetaCall,(int)beNDMWShopCtrl40_className,88,(int)beNDMWShopCtrl40_vtableRead,(int)beNDMWShopCtrl40_fieldInit,0,0);
}
void *beNDMWShopCtrl40_getMetaCall(){return beNDMWShopCtrl40_getMeta();}
void beNDMWShopCtrl40_fieldInit(){
 void *meta=beNDMWShopCtrl40_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWShopCtrl40_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWShopCtrl40_fieldNames,beNDMWShopCtrl40_fieldStorage,beNDMWShopCtrl40_fieldOffsets,field);
}
void *beNDMWShopCtrl30_create(void *object){
 beNDMWShopCtrl30_arkRegister();
 return meta_createInstance(beNDMWShopCtrl30_meta,object);
}
void *beNDMWShopCtrl30_getMeta(){
 if(!beNDMWShopCtrl30_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl30_meta)[0x24/4]&4)) beNDMWShopCtrl30_arkRegister();
 return beNDMWShopCtrl30_meta;
}
}
#pragma pop
