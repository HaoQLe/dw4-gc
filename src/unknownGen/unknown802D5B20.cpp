#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beHitLandResultData_fieldInit();
void *beHitLandResultData_getMeta();
void beHitLandResultData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beHitLandResultData_className[];
extern char beHitLandResultData_meta[];
void beHitLandResultData_register();
void *beHitLandResultData_getMetaCall();
}
extern "C" {
void beHitLandResultData_arkRegister(){
 meta_registerNow((int)beHitLandResultData_register);
}
void beHitLandResultData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandResultData_meta,(int)igObject_register,(int)fn_800237D0,(int)beHitLandResultData_getMetaCall,(int)beHitLandResultData_className,88,(int)beHitLandResultData_vtableRead,(int)beHitLandResultData_fieldInit,0,0);
}
void *beHitLandResultData_getMetaCall(){return beHitLandResultData_getMeta();}
}
#pragma pop
