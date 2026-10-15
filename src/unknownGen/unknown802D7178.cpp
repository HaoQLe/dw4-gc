#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beGeneraterInfo_fieldInit();
void *beGeneraterInfo_getMeta();
void beGeneraterInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beGeneraterInfo_className[];
extern char beGeneraterInfo_dependencies[];
extern char beGeneraterInfo_meta[];
void beGeneraterInfo_register();
void *beGeneraterInfo_getMetaCall();
}
extern "C" {
void beGeneraterInfo_arkRegister(){
 meta_registerNow((int)beGeneraterInfo_register);
}
void beGeneraterInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beGeneraterInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beGeneraterInfo_getMetaCall,(int)beGeneraterInfo_className,32,(int)beGeneraterInfo_vtableRead,(int)beGeneraterInfo_fieldInit,0,(int)beGeneraterInfo_dependencies);
}
void *beGeneraterInfo_getMetaCall(){return beGeneraterInfo_getMeta();}
}
#pragma pop
