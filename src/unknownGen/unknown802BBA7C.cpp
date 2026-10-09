#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void beSaveUtilInfoRam_fieldInit();
void *beSaveUtilInfoRam_getMeta();
void beSaveUtilInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041DA4C[];
extern char lbl_804CF820[];
extern char lbl_8053481C[];
void beSaveUtilInfoRam_register();
void *beSaveUtilInfoRam_getMetaCall();
}
extern "C" {
void fn_802BBA7C(){
 fn_80066188((int)beSaveUtilInfoRam_register);
}
void beSaveUtilInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053481C,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beSaveUtilInfoRam_getMetaCall,(int)lbl_8041DA4C,52,(int)beSaveUtilInfoRam_vtableRead,(int)beSaveUtilInfoRam_fieldInit,0,(int)lbl_804CF820);
}
void *beSaveUtilInfoRam_getMetaCall(){return beSaveUtilInfoRam_getMeta();}
}
#pragma pop
