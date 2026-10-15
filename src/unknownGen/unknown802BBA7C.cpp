#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beSaveUtilInfoRam_fieldInit();
void *beSaveUtilInfoRam_getMeta();
void beSaveUtilInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beSaveUtilInfoRam_className[];
extern char lbl_804CF820[];
extern char beSaveUtilInfoRam_meta[];
void beSaveUtilInfoRam_register();
void *beSaveUtilInfoRam_getMetaCall();
}
extern "C" {
void beSaveUtilInfoRam_registerNow(){
 meta_registerNow((int)beSaveUtilInfoRam_register);
}
void beSaveUtilInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSaveUtilInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beSaveUtilInfoRam_getMetaCall,(int)beSaveUtilInfoRam_className,52,(int)beSaveUtilInfoRam_vtableRead,(int)beSaveUtilInfoRam_fieldInit,0,(int)lbl_804CF820);
}
void *beSaveUtilInfoRam_getMetaCall(){return beSaveUtilInfoRam_getMeta();}
}
#pragma pop
