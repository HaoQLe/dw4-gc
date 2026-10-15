#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWSaveIntfCtrlData_fieldInit();
void *beNDMWSaveIntfCtrlData_getMeta();
void beNDMWSaveIntfCtrlData_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWSaveIntfCtrlData_className[];
extern char beNDMWSaveIntfCtrlData_meta[];
void beNDMWSaveIntfCtrlData_register();
void *beNDMWSaveIntfCtrlData_getMetaCall();
}
extern "C" {
void beNDMWSaveIntfCtrlData_arkRegister(){
 meta_registerNow((int)beNDMWSaveIntfCtrlData_register);
}
void beNDMWSaveIntfCtrlData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWSaveIntfCtrlData_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWSaveIntfCtrlData_getMetaCall,(int)beNDMWSaveIntfCtrlData_className,52,(int)beNDMWSaveIntfCtrlData_vtableRead,(int)beNDMWSaveIntfCtrlData_fieldInit,0,0);
}
void *beNDMWSaveIntfCtrlData_getMetaCall(){return beNDMWSaveIntfCtrlData_getMeta();}
}
#pragma pop
