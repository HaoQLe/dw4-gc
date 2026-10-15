#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelectA0_getMeta();
void beNDMWShopSelectA0_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWShopSelect52_registerNow();
extern char beNDMWShopSelectA0_className[];
extern char beNDMWShopSelectA0_meta[];
extern void *beNDMWShopSelect52_meta;
void beNDMWShopSelectA0_register();
void *beNDMWShopSelectA0_getMetaCall();
}
extern "C" {
void beNDMWShopSelectA0_registerNow(){
 meta_registerNow((int)beNDMWShopSelectA0_register);
}
void beNDMWShopSelectA0_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopSelectA0_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelectA0_getMetaCall,(int)beNDMWShopSelectA0_className,112,(int)beNDMWShopSelectA0_vtableRead,0,0,0);
}
void *beNDMWShopSelectA0_getMetaCall(){return beNDMWShopSelectA0_getMeta();}
void *beNDMWShopSelect52_create(void *object){
 beNDMWShopSelect52_registerNow();
 return meta_createInstance(beNDMWShopSelect52_meta,object);
}
void *beNDMWShopSelect52_getMeta(){
 if(!beNDMWShopSelect52_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopSelect52_meta)[0x24/4]&4)) beNDMWShopSelect52_registerNow();
 return beNDMWShopSelect52_meta;
}
}
#pragma pop
