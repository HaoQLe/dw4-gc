#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beSwitchCtrlInfo_fieldInit();
void *beSwitchCtrlInfo_getMeta();
void beSwitchCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beSwitchCtrlInfo_className[];
extern char beSwitchCtrlInfo_dependencies[];
extern char beSwitchCtrlInfo_meta[];
void beSwitchCtrlInfo_register();
void *beSwitchCtrlInfo_getMetaCall();
}
extern "C" {
void beSwitchCtrlInfo_arkRegister(){
 meta_registerNow((int)beSwitchCtrlInfo_register);
}
void beSwitchCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSwitchCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beSwitchCtrlInfo_getMetaCall,(int)beSwitchCtrlInfo_className,32,(int)beSwitchCtrlInfo_vtableRead,(int)beSwitchCtrlInfo_fieldInit,0,(int)beSwitchCtrlInfo_dependencies);
}
void *beSwitchCtrlInfo_getMetaCall(){return beSwitchCtrlInfo_getMeta();}
}
#pragma pop
