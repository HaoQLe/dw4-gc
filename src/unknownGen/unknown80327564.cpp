#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopTitle00_getMeta();
void beNDMWShopTitle00_vtableRead();
void beNDMWWindowTitle_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void beNDMWStatusTitle04_registerNow();
extern char beNDMWShopTitle00_className[];
extern char beNDMWShopTitle00_meta[];
extern void *beNDMWStatusTitle04_meta;
void beNDMWShopTitle00_register();
void *beNDMWShopTitle00_getMetaCall();
}
extern "C" {
void beNDMWShopTitle00_registerNow(){
 meta_registerNow((int)beNDMWShopTitle00_register);
}
void beNDMWShopTitle00_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopTitle00_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWShopTitle00_getMetaCall,(int)beNDMWShopTitle00_className,80,(int)beNDMWShopTitle00_vtableRead,0,0,0);
}
void *beNDMWShopTitle00_getMetaCall(){return beNDMWShopTitle00_getMeta();}
void *beNDMWStatusTitle04_create(void *object){
 beNDMWStatusTitle04_registerNow();
 return meta_createInstance(beNDMWStatusTitle04_meta,object);
}
void *beNDMWStatusTitle04_getMeta(){
 if(!beNDMWStatusTitle04_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusTitle04_meta)[0x24/4]&4)) beNDMWStatusTitle04_registerNow();
 return beNDMWStatusTitle04_meta;
}
}
#pragma pop
