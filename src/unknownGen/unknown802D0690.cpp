#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beMatCtrlInfo_fieldInit();
void *beMatCtrlInfo_getMeta();
void beMatCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beMatCtrlInfo_className[];
extern char beMatCtrlInfo_dependencies[];
extern char beMatCtrlInfo_meta[];
void beMatCtrlInfo_register();
void *beMatCtrlInfo_getMetaCall();
}
extern "C" {
void beMatCtrlInfo_arkRegister(){
 meta_registerNow((int)beMatCtrlInfo_register);
}
void beMatCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beMatCtrlInfo_getMetaCall,(int)beMatCtrlInfo_className,40,(int)beMatCtrlInfo_vtableRead,(int)beMatCtrlInfo_fieldInit,0,(int)beMatCtrlInfo_dependencies);
}
void *beMatCtrlInfo_getMetaCall(){return beMatCtrlInfo_getMeta();}
}
#pragma pop
