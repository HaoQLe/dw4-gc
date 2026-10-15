#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWShopDevice_fieldInit();
void *beNDMWShopDevice_getMeta();
void beNDMWShopDevice_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWShopDevice_className[];
extern char beNDMWShopDevice_dependencies[];
extern char beNDMWShopDevice_meta[];
void beNDMWShopDevice_register();
void *beNDMWShopDevice_getMetaCall();
}
extern "C" {
void beNDMWShopDevice_arkRegister(){
 meta_registerNow((int)beNDMWShopDevice_register);
}
void beNDMWShopDevice_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopDevice_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWShopDevice_getMetaCall,(int)beNDMWShopDevice_className,100,(int)beNDMWShopDevice_vtableRead,(int)beNDMWShopDevice_fieldInit,0,(int)beNDMWShopDevice_dependencies);
}
void *beNDMWShopDevice_getMetaCall(){return beNDMWShopDevice_getMeta();}
}
#pragma pop
