#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLogoCtrlData_fieldInit();
void *beNDMWLogoCtrlData_getMeta();
void beNDMWLogoCtrlData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLogoCtrlData_className[];
extern char beNDMWLogoCtrlData_meta[];
void beNDMWLogoCtrlData_register();
void *beNDMWLogoCtrlData_getMetaCall();
}
extern "C" {
void beNDMWLogoCtrlData_arkRegister(){
 meta_registerNow((int)beNDMWLogoCtrlData_register);
}
void beNDMWLogoCtrlData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLogoCtrlData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLogoCtrlData_getMetaCall,(int)beNDMWLogoCtrlData_className,32,(int)beNDMWLogoCtrlData_vtableRead,(int)beNDMWLogoCtrlData_fieldInit,0,0);
}
void *beNDMWLogoCtrlData_getMetaCall(){return beNDMWLogoCtrlData_getMeta();}
}
#pragma pop
