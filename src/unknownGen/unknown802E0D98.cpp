#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beChangePosTransformInfoRam_fieldInit();
void *beChangePosTransformInfoRam_getMeta();
void beChangePosTransformInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beChangePosTransformInfoRam_className[];
extern char lbl_804D2958[];
extern char beChangePosTransformInfoRam_meta[];
void beChangePosTransformInfoRam_register();
void *beChangePosTransformInfoRam_getMetaCall();
}
extern "C" {
void beChangePosTransformInfoRam_registerNow(){
 meta_registerNow((int)beChangePosTransformInfoRam_register);
}
void beChangePosTransformInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beChangePosTransformInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beChangePosTransformInfoRam_getMetaCall,(int)beChangePosTransformInfoRam_className,48,(int)beChangePosTransformInfoRam_vtableRead,(int)beChangePosTransformInfoRam_fieldInit,0,(int)lbl_804D2958);
}
void *beChangePosTransformInfoRam_getMetaCall(){return beChangePosTransformInfoRam_getMeta();}
}
#pragma pop
