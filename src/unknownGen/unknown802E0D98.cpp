#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beChangePosTransformInfoRam_fieldInit();
void *beChangePosTransformInfoRam_getMeta();
void beChangePosTransformInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_80420A3C[];
extern char lbl_804D2958[];
extern char lbl_805355CC[];
void beChangePosTransformInfoRam_register();
void *beChangePosTransformInfoRam_getMetaCall();
}
extern "C" {
void fn_802E0D98(){
 fn_80066188((int)beChangePosTransformInfoRam_register);
}
void beChangePosTransformInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805355CC,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beChangePosTransformInfoRam_getMetaCall,(int)lbl_80420A3C,48,(int)beChangePosTransformInfoRam_vtableRead,(int)beChangePosTransformInfoRam_fieldInit,0,(int)lbl_804D2958);
}
void *beChangePosTransformInfoRam_getMetaCall(){return beChangePosTransformInfoRam_getMeta();}
}
#pragma pop
