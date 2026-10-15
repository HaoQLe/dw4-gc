#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlSell_getMeta();
void beNDMWShopCtrlSell_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrlEditBit_arkRegister();
extern char beNDMWShopCtrlSell_className[];
extern char beNDMWShopCtrlSell_meta[];
extern void *beNDMWShopCtrlEditBit_meta;
void beNDMWShopCtrlSell_register();
void *beNDMWShopCtrlSell_getMetaCall();
}
extern "C" {
void beNDMWShopCtrlSell_arkRegister(){
 meta_registerNow((int)beNDMWShopCtrlSell_register);
}
void beNDMWShopCtrlSell_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopCtrlSell_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlSell_getMetaCall,(int)beNDMWShopCtrlSell_className,84,(int)beNDMWShopCtrlSell_vtableRead,0,0,0);
}
void *beNDMWShopCtrlSell_getMetaCall(){return beNDMWShopCtrlSell_getMeta();}
void *beNDMWShopCtrlEditBit_create(void *object){
 beNDMWShopCtrlEditBit_arkRegister();
 return meta_createInstance(beNDMWShopCtrlEditBit_meta,object);
}
void *beNDMWShopCtrlEditBit_getMeta(){
 if(!beNDMWShopCtrlEditBit_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlEditBit_meta)[0x24/4]&4)) beNDMWShopCtrlEditBit_arkRegister();
 return beNDMWShopCtrlEditBit_meta;
}
}
#pragma pop
