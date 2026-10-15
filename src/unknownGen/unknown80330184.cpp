#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl00_getMeta();
void beNDMWShopCtrl00_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWStatusSubMenu_arkRegister();
extern char beNDMWShopCtrl00_className[];
extern char beNDMWShopCtrl00_meta[];
extern void *beNDMWStatusSubMenu_meta;
void beNDMWShopCtrl00_register();
void *beNDMWShopCtrl00_getMetaCall();
}
extern "C" {
void *beNDMWStatusSubMenu_create(void *object){
 beNDMWStatusSubMenu_arkRegister();
 return meta_createInstance(beNDMWStatusSubMenu_meta,object);
}
void *beNDMWStatusSubMenu_getMeta(){
 if(!beNDMWStatusSubMenu_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSubMenu_meta)[0x24/4]&4)) beNDMWStatusSubMenu_arkRegister();
 return beNDMWStatusSubMenu_meta;
}
}
#pragma pop
