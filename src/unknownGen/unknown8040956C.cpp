#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_80402E28();
void igActorManager_fieldInit();
void *igActorManager_getMeta();
void igActorManager_vtableRead();
void igInfoManager_register();
extern char lbl_80462C44[];
extern char lbl_804F1030[];
extern char lbl_8055CB40[];
void igActorManager_register();
void *igActorManager_getMetaCall();
}
extern "C" {
void fn_8040956C(){
 fn_80066188((int)igActorManager_register);
}
void igActorManager_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CB40,(int)igInfoManager_register,(int)fn_80284550,(int)igActorManager_getMetaCall,(int)lbl_80462C44,56,(int)igActorManager_vtableRead,(int)igActorManager_fieldInit,0,(int)lbl_804F1030);
}
void *igActorManager_getMetaCall(){return igActorManager_getMeta();}
}
#pragma pop
