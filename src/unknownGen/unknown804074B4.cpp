#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igFlyMode_fieldInit();
void *igFlyMode_getMeta();
void igFlyMode_vtableRead();
void igViewMode_register();
extern char igFlyMode_className[];
extern char igFlyMode_dependencies[];
extern char igFlyMode_meta[];
void igFlyMode_register();
void *igFlyMode_getMetaCall();
}
extern "C" {
void igFlyMode_arkRegister(){
 meta_registerNow((int)igFlyMode_register);
}
void igFlyMode_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igFlyMode_meta,(int)igViewMode_register,(int)fn_802E170C,(int)igFlyMode_getMetaCall,(int)igFlyMode_className,160,(int)igFlyMode_vtableRead,(int)igFlyMode_fieldInit,0,(int)igFlyMode_dependencies);
}
void *igFlyMode_getMetaCall(){return igFlyMode_getMeta();}
}
#pragma pop
