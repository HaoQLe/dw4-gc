#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWTitle2Info_getMeta();
void beNDMWTitle2Info_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWTitle2Option_registerNow();
extern char beNDMWTitle2Info_className[];
extern char beNDMWTitle2Info_meta[];
extern void *beNDMWTitle2Option_meta;
void beNDMWTitle2Info_register();
void *beNDMWTitle2Info_getMetaCall();
}
extern "C" {
void beNDMWTitle2Info_registerNow(){
 meta_registerNow((int)beNDMWTitle2Info_register);
}
void beNDMWTitle2Info_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWTitle2Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWTitle2Info_getMetaCall,(int)beNDMWTitle2Info_className,28,(int)beNDMWTitle2Info_vtableRead,0,0,0);
}
void *beNDMWTitle2Info_getMetaCall(){return beNDMWTitle2Info_getMeta();}
void *beNDMWTitle2Option_create(void *object){
 beNDMWTitle2Option_registerNow();
 return meta_createInstance(beNDMWTitle2Option_meta,object);
}
void *beNDMWTitle2Option_getMeta(){
 if(!beNDMWTitle2Option_meta || !(reinterpret_cast<unsigned int *>(beNDMWTitle2Option_meta)[0x24/4]&4)) beNDMWTitle2Option_registerNow();
 return beNDMWTitle2Option_meta;
}
}
#pragma pop
