#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTargetObj_fieldInit();
void *beTargetObj_getMeta();
void beTargetObj_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beTargetObj_className[];
extern char beTargetObj_dependencies[];
extern char beTargetObj_meta[];
void beTargetObj_register();
void *beTargetObj_getMetaCall();
}
extern "C" {
void beTargetObj_arkRegister(){
 meta_registerNow((int)beTargetObj_register);
}
void beTargetObj_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTargetObj_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beTargetObj_getMetaCall,(int)beTargetObj_className,28,(int)beTargetObj_vtableRead,(int)beTargetObj_fieldInit,0,(int)beTargetObj_dependencies);
}
void *beTargetObj_getMetaCall(){return beTargetObj_getMeta();}
}
#pragma pop
