#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beActionStarterInfo_fieldInit();
void *beActionStarterInfo_getMeta();
void beActionStarterInfo_vtableRead();
void beBaseInfo_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beActionStarterInfo_className[];
extern char beActionStarterInfo_dependencies[];
extern char beActionStarterInfo_meta[];
void beActionStarterInfo_register();
void *beActionStarterInfo_getMetaCall();
}
extern "C" {
void beActionStarterInfo_arkRegister(){
 meta_registerNow((int)beActionStarterInfo_register);
}
void beActionStarterInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beActionStarterInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beActionStarterInfo_getMetaCall,(int)beActionStarterInfo_className,32,(int)beActionStarterInfo_vtableRead,(int)beActionStarterInfo_fieldInit,0,(int)beActionStarterInfo_dependencies);
}
void *beActionStarterInfo_getMetaCall(){return beActionStarterInfo_getMeta();}
}
#pragma pop
