#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80402E28();
void igActorManager_fieldInit();
void *igActorManager_getMeta();
void igActorManager_vtableRead();
void igInfoManager_register();
extern char igActorManager_className[];
extern char igActorManager_dependencies[];
extern char igActorManager_meta[];
void igActorManager_register();
void *igActorManager_getMetaCall();
}
extern "C" {
void igActorManager_arkRegister(){
 meta_registerNow((int)igActorManager_register);
}
void igActorManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igActorManager_meta,(int)igInfoManager_register,(int)fn_80284550,(int)igActorManager_getMetaCall,(int)igActorManager_className,56,(int)igActorManager_vtableRead,(int)igActorManager_fieldInit,0,(int)igActorManager_dependencies);
}
void *igActorManager_getMetaCall(){return igActorManager_getMeta();}
}
#pragma pop
