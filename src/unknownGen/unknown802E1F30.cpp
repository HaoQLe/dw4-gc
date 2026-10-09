#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beCameraBoxData_fieldInit();
void *beCameraBoxData_getMeta();
void beCameraBoxData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420B08[];
extern char lbl_804D2A60[];
extern char lbl_8053561C[];
void beCameraBoxData_register();
void *beCameraBoxData_getMetaCall();
}
extern "C" {
void fn_802E1F30(){
 fn_80066188((int)beCameraBoxData_register);
}
void beCameraBoxData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053561C,(int)igObject_register,(int)fn_800237D0,(int)beCameraBoxData_getMetaCall,(int)lbl_80420B08,28,(int)beCameraBoxData_vtableRead,(int)beCameraBoxData_fieldInit,0,(int)lbl_804D2A60);
}
void *beCameraBoxData_getMetaCall(){return beCameraBoxData_getMeta();}
}
#pragma pop
