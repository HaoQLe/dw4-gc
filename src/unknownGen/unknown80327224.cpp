#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopTitle01_getMeta();
void beNDMWShopTitle01_vtableRead();
void beNDMWWindowTitle_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void beNDMWShopTitle00_registerNow();
extern char beNDMWShopTitle01_className[];
extern char beNDMWShopTitle01_meta[];
extern void *beNDMWShopTitle00_meta;
void beNDMWShopTitle01_register();
void *beNDMWShopTitle01_getMetaCall();
}
extern "C" {
void beNDMWShopTitle01_registerNow(){
 meta_registerNow((int)beNDMWShopTitle01_register);
}
void beNDMWShopTitle01_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopTitle01_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWShopTitle01_getMetaCall,(int)beNDMWShopTitle01_className,80,(int)beNDMWShopTitle01_vtableRead,0,0,0);
}
void *beNDMWShopTitle01_getMetaCall(){return beNDMWShopTitle01_getMeta();}
void *beNDMWShopTitle00_create(void *object){
 beNDMWShopTitle00_registerNow();
 return meta_createInstance(beNDMWShopTitle00_meta,object);
}
void *beNDMWShopTitle00_getMeta(){
 if(!beNDMWShopTitle00_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopTitle00_meta)[0x24/4]&4)) beNDMWShopTitle00_registerNow();
 return beNDMWShopTitle00_meta;
}
}
#pragma pop
