#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlA2_getMeta();
void beNDMWShopCtrlA2_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrlA1_registerNow();
extern char beNDMWShopCtrlA2_className[];
extern char beNDMWShopCtrlA2_meta[];
extern void *beNDMWShopCtrlA1_meta;
void beNDMWShopCtrlA2_register();
void *beNDMWShopCtrlA2_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlA2_registerNow(){
 meta_registerNow((int)beNDMWShopCtrlA2_register);
}
void beNDMWShopCtrlA2_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlA2_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlA2_getMetaCall,(int)beNDMWShopCtrlA2_className,84,(int)beNDMWShopCtrlA2_vtableRead,0,0,0);
}
void *beNDMWShopCtrlA2_getMetaCall(){return beNDMWShopCtrlA2_getMeta();}
void *beNDMWShopCtrlA1_create(void *object){
 beNDMWShopCtrlA1_registerNow();
 return meta_createInstance(beNDMWShopCtrlA1_meta,object);
}
void *beNDMWShopCtrlA1_getMeta(){
 if(!beNDMWShopCtrlA1_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlA1_meta)[0x24/4]&4)) beNDMWShopCtrlA1_registerNow();
 return beNDMWShopCtrlA1_meta;
}
}
#pragma pop
