#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWTitle2CtrlData_fieldInit();
void *beNDMWTitle2CtrlData_getMeta();
void beNDMWTitle2CtrlData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWTitle2CtrlData_className[];
extern char beNDMWTitle2CtrlData_meta[];
void beNDMWTitle2CtrlData_register();
void *beNDMWTitle2CtrlData_getMetaCall();
}
extern "C" {
void beNDMWTitle2CtrlData_arkRegister(){
 meta_registerNow((int)beNDMWTitle2CtrlData_register);
}
void beNDMWTitle2CtrlData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWTitle2CtrlData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWTitle2CtrlData_getMetaCall,(int)beNDMWTitle2CtrlData_className,48,(int)beNDMWTitle2CtrlData_vtableRead,(int)beNDMWTitle2CtrlData_fieldInit,0,0);
}
void *beNDMWTitle2CtrlData_getMetaCall(){return beNDMWTitle2CtrlData_getMeta();}
}
#pragma pop
