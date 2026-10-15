#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSystem_fieldInit();
void *beSystem_getMeta();
void beSystem_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_802B1AC8();
void igInfoManager_register();
extern char beSystem_className[];
extern char beSystem_dependencies[];
extern char beSystem_meta[];
void beSystem_register();
void *beSystem_getMetaCall();
}
extern "C" {
void beSystem_arkRegister(){
 meta_registerNow((int)beSystem_register);
}
void beSystem_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSystem_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beSystem_getMetaCall,(int)beSystem_className,104,(int)beSystem_vtableRead,(int)beSystem_fieldInit,0,(int)beSystem_dependencies);
}
void *beSystem_getMetaCall(){return beSystem_getMeta();}
}
#pragma pop
