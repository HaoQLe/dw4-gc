#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8010F4FC();
void fn_80402E28();
void igEventReceiver_register();
void igViewManager_fieldInit();
void *igViewManager_getMeta();
void igViewManager_vtableRead();
extern char lbl_804629E0[];
extern char lbl_804F0CA8[];
extern char lbl_8055CA64[];
void igViewManager_register();
void *igViewManager_getMetaCall();
}
extern "C" {
void fn_80407E08(){
 fn_80066188((int)igViewManager_register);
}
void igViewManager_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA64,(int)igEventReceiver_register,(int)fn_8010F4FC,(int)igViewManager_getMetaCall,(int)lbl_804629E0,84,(int)igViewManager_vtableRead,(int)igViewManager_fieldInit,0,(int)lbl_804F0CA8);
}
void *igViewManager_getMetaCall(){return igViewManager_getMeta();}
}
#pragma pop
