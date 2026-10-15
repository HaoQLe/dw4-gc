#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_80402E28();
void igEventReceiver_register();
void igViewManager_fieldInit();
void *igViewManager_getMeta();
void igViewManager_vtableRead();
extern char igViewManager_className[];
extern char igViewManager_dependencies[];
extern char igViewManager_meta[];
void igViewManager_register();
void *igViewManager_getMetaCall();
}
extern "C" {
void igViewManager_arkRegister(){
 meta_registerNow((int)igViewManager_register);
}
void igViewManager_register(){
 fn_80402E28();
 meta_registerClass(0,(int)igViewManager_meta,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igViewManager_getMetaCall,(int)igViewManager_className,84,(int)igViewManager_vtableRead,(int)igViewManager_fieldInit,0,(int)igViewManager_dependencies);
}
void *igViewManager_getMetaCall(){return igViewManager_getMeta();}
}
#pragma pop
