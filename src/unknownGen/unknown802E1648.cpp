#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraMode_fieldInit();
void *beCameraMode_getMeta();
void beCameraMode_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E170C();
void igViewMode_register();
extern char lbl_80420A8C[];
extern char lbl_804D2980[];
extern char lbl_805355E0[];
void beCameraMode_register();
void *beCameraMode_getMetaCall();
}
extern "C" {
void fn_802E1648(){
 fn_80066188((int)beCameraMode_register);
}
void beCameraMode_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355E0,(int)igViewMode_register,(int)fn_802E170C,(int)beCameraMode_getMetaCall,(int)lbl_80420A8C,120,(int)beCameraMode_vtableRead,(int)beCameraMode_fieldInit,0,(int)lbl_804D2980);
}
void *beCameraMode_getMetaCall(){return beCameraMode_getMeta();}
}
#pragma pop
