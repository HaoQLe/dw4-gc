#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beStaticInfoCtl_fieldInit();
void *beStaticInfoCtl_getMeta();
void beStaticInfoCtl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beStaticInfoCtl_className[];
extern char lbl_804CF460[];
extern char beStaticInfoCtl_meta[];
void beStaticInfoCtl_register();
void *beStaticInfoCtl_getMetaCall();
}
extern "C" {
void beStaticInfoCtl_registerNow(){
 meta_registerNow((int)beStaticInfoCtl_register);
}
void beStaticInfoCtl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beStaticInfoCtl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beStaticInfoCtl_getMetaCall,(int)beStaticInfoCtl_className,36,(int)beStaticInfoCtl_vtableRead,(int)beStaticInfoCtl_fieldInit,0,(int)lbl_804CF460);
}
void *beStaticInfoCtl_getMetaCall(){return beStaticInfoCtl_getMeta();}
}
#pragma pop
