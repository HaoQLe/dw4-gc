#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl30_getMeta();
void beNDMWShopCtrl30_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrlEvolve_arkRegister();
extern char beNDMWShopCtrl30_className[];
extern char beNDMWShopCtrl30_fieldTypes[];
extern char beNDMWShopCtrl30_fieldNames[];
extern char beNDMWShopCtrl30_fieldStorage[];
extern char beNDMWShopCtrl30_fieldOffsets[];
extern void *beNDMWShopCtrl30_meta;
extern void *beNDMWShopCtrlEvolve_meta;
void beNDMWShopCtrl30_register();
void *beNDMWShopCtrl30_getMetaCall();
void beNDMWShopCtrl30_fieldInit();
}
extern "C" {
void *beNDMWShopCtrlEvolve_create(void *object){
 beNDMWShopCtrlEvolve_arkRegister();
 return meta_createInstance(beNDMWShopCtrlEvolve_meta,object);
}
void *beNDMWShopCtrlEvolve_getMeta(){
 if(!beNDMWShopCtrlEvolve_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlEvolve_meta)[0x24/4]&4)) beNDMWShopCtrlEvolve_arkRegister();
 return beNDMWShopCtrlEvolve_meta;
}
}
#pragma pop
