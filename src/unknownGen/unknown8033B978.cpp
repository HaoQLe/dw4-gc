#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWLogoInfo_getMeta();
void beNDMWLogoInfo_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWLogoCtrlData_arkRegister();
extern char beNDMWLogoInfo_className[];
extern char beNDMWLogoInfo_meta[];
extern void *beNDMWLogoCtrlData_meta;
void beNDMWLogoInfo_register();
void *beNDMWLogoInfo_getMetaCall();
}
extern "C" {
void beNDMWLogoInfo_arkRegister(){
 meta_registerNow((int)beNDMWLogoInfo_register);
}
void beNDMWLogoInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLogoInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWLogoInfo_getMetaCall,(int)beNDMWLogoInfo_className,28,(int)beNDMWLogoInfo_vtableRead,0,0,0);
}
void *beNDMWLogoInfo_getMetaCall(){return beNDMWLogoInfo_getMeta();}
void *beNDMWLogoCtrlData_create(void *object){
 beNDMWLogoCtrlData_arkRegister();
 return meta_createInstance(beNDMWLogoCtrlData_meta,object);
}
void *beNDMWLogoCtrlData_getMeta(){
 if(!beNDMWLogoCtrlData_meta || !(reinterpret_cast<unsigned int *>(beNDMWLogoCtrlData_meta)[0x24/4]&4)) beNDMWLogoCtrlData_arkRegister();
 return beNDMWLogoCtrlData_meta;
}
}
#pragma pop
