#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802E170C();
void fn_80402E28();
void igCameraMode_fieldInit();
void *igCameraMode_getMeta();
void igCameraMode_vtableRead();
void igViewMode_register();
extern char lbl_804629A0[];
extern char lbl_804F0C6C[];
extern char lbl_8055CA50[];
void igCameraMode_register();
void *igCameraMode_getMetaCall();
}
extern "C" {
void fn_8040789C(){
 fn_80066188((int)igCameraMode_register);
}
void igCameraMode_register(){
 fn_80402E28();
 fn_80066204(0,(int)lbl_8055CA50,(int)igViewMode_register,(int)fn_802E170C,(int)igCameraMode_getMetaCall,(int)lbl_804629A0,84,(int)igCameraMode_vtableRead,(int)igCameraMode_fieldInit,0,(int)lbl_804F0C6C);
}
void *igCameraMode_getMetaCall(){return igCameraMode_getMeta();}
}
#pragma pop
