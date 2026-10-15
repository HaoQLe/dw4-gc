#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beLightCtrlInfo_fieldInit();
void *beLightCtrlInfo_getMeta();
void beLightCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beLightCtrlInfo_className[];
extern char beLightCtrlInfo_dependencies[];
extern char beLightCtrlInfo_meta[];
void beLightCtrlInfo_register();
void *beLightCtrlInfo_getMetaCall();
}
extern "C" {
void beLightCtrlInfo_arkRegister(){
 meta_registerNow((int)beLightCtrlInfo_register);
}
void beLightCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLightCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beLightCtrlInfo_getMetaCall,(int)beLightCtrlInfo_className,32,(int)beLightCtrlInfo_vtableRead,(int)beLightCtrlInfo_fieldInit,0,(int)beLightCtrlInfo_dependencies);
}
void *beLightCtrlInfo_getMetaCall(){return beLightCtrlInfo_getMeta();}
}
#pragma pop
