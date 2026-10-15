#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beModelCtrlInfo_fieldInit();
void *beModelCtrlInfo_getMeta();
void beModelCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beModelCtrlInfo_className[];
extern char beModelCtrlInfo_meta[];
void beModelCtrlInfo_register();
void *beModelCtrlInfo_getMetaCall();
}
extern "C" {
void beModelCtrlInfo_registerNow(){
 meta_registerNow((int)beModelCtrlInfo_register);
}
void beModelCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beModelCtrlInfo_getMetaCall,(int)beModelCtrlInfo_className,32,(int)beModelCtrlInfo_vtableRead,(int)beModelCtrlInfo_fieldInit,0,0);
}
void *beModelCtrlInfo_getMetaCall(){return beModelCtrlInfo_getMeta();}
}
#pragma pop
