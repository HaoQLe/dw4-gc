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
void beNDMWStatusSubMenu_registerNow();
extern char beNDMWShopCtrl00_className[];
extern char beNDMWShopCtrl00_meta[];
extern void *beNDMWStatusSubMenu_meta;
void beNDMWShopCtrl00_register();
void *beNDMWShopCtrl00_getMetaCall();
}
extern "C" {
void beNDMWShopCtrl00_registerNow(){
 meta_registerNow((int)beNDMWShopCtrl00_register);
}
void beNDMWShopCtrl00_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrl00_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl00_getMetaCall,(int)beNDMWShopCtrl00_className,84,(int)beNDMWShopCtrl00_vtableRead,0,0,0);
}
void *beNDMWShopCtrl00_getMetaCall(){return beNDMWShopCtrl00_getMeta();}
void *beNDMWStatusSubMenu_create(void *object){
 beNDMWStatusSubMenu_registerNow();
 return meta_createInstance(beNDMWStatusSubMenu_meta,object);
}
void *beNDMWStatusSubMenu_getMeta(){
 if(!beNDMWStatusSubMenu_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSubMenu_meta)[0x24/4]&4)) beNDMWStatusSubMenu_registerNow();
 return beNDMWStatusSubMenu_meta;
}
}
#pragma pop
