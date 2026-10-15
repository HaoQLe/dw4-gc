#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect34_getMeta();
void beNDMWShopSelect34_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect11_registerNow();
extern char beNDMWShopSelect34_className[];
extern char beNDMWShopSelect34_meta[];
extern void *beNDMWShopSelect11_meta;
void beNDMWShopSelect34_register();
void *beNDMWShopSelect34_getMetaCall();
}
extern "C" {
void beNDMWShopSelect34_registerNow(){
 meta_registerNow((int)beNDMWShopSelect34_register);
}
void beNDMWShopSelect34_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopSelect34_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect34_getMetaCall,(int)beNDMWShopSelect34_className,112,(int)beNDMWShopSelect34_vtableRead,0,0,0);
}
void *beNDMWShopSelect34_getMetaCall(){return beNDMWShopSelect34_getMeta();}
void *beNDMWShopSelect11_create(void *object){
 beNDMWShopSelect11_registerNow();
 return meta_createInstance(beNDMWShopSelect11_meta,object);
}
void *beNDMWShopSelect11_getMeta(){
 if(!beNDMWShopSelect11_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect11_meta)[0x24/4]&4)) beNDMWShopSelect11_registerNow();
 return beNDMWShopSelect11_meta;
}
}
#pragma pop
