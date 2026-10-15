#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beHitLandModelInfo_fieldInit();
void *beHitLandModelInfo_getMeta();
void beHitLandModelInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beHitLandModelInfo_className[];
extern char beHitLandModelInfo_dependencies[];
extern char beHitLandModelInfo_meta[];
void beHitLandModelInfo_register();
void *beHitLandModelInfo_getMetaCall();
}
extern "C" {
void beHitLandModelInfo_arkRegister(){
 meta_registerNow((int)beHitLandModelInfo_register);
}
void beHitLandModelInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandModelInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beHitLandModelInfo_getMetaCall,(int)beHitLandModelInfo_className,44,(int)beHitLandModelInfo_vtableRead,(int)beHitLandModelInfo_fieldInit,0,(int)beHitLandModelInfo_dependencies);
}
void *beHitLandModelInfo_getMetaCall(){return beHitLandModelInfo_getMeta();}
}
#pragma pop
