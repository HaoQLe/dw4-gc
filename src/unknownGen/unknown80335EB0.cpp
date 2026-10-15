#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWSaveCtrlInfo_getMeta();
void beNDMWSaveCtrlInfo_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWSaveCtrlCtrlData_registerNow();
extern char beNDMWSaveCtrlInfo_className[];
extern char beNDMWSaveCtrlInfo_meta[];
extern void *beNDMWSaveCtrlCtrlData_meta;
void beNDMWSaveCtrlInfo_register();
void *beNDMWSaveCtrlInfo_getMetaCall();
}
extern "C" {
void beNDMWSaveCtrlInfo_registerNow(){
 meta_registerNow((int)beNDMWSaveCtrlInfo_register);
}
void beNDMWSaveCtrlInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWSaveCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWSaveCtrlInfo_getMetaCall,(int)beNDMWSaveCtrlInfo_className,28,(int)beNDMWSaveCtrlInfo_vtableRead,0,0,0);
}
void *beNDMWSaveCtrlInfo_getMetaCall(){return beNDMWSaveCtrlInfo_getMeta();}
void *beNDMWSaveCtrlCtrlData_create(void *object){
 beNDMWSaveCtrlCtrlData_registerNow();
 return meta_createInstance(beNDMWSaveCtrlCtrlData_meta,object);
}
void *beNDMWSaveCtrlCtrlData_getMeta(){
 if(!beNDMWSaveCtrlCtrlData_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveCtrlCtrlData_meta)[0x24/4]&4)) beNDMWSaveCtrlCtrlData_registerNow();
 return beNDMWSaveCtrlCtrlData_meta;
}
}
#pragma pop
