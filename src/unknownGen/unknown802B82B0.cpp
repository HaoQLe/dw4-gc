#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beStaticInfoCtl_fieldInit();
void *beStaticInfoCtl_getMeta();
void beStaticInfoCtl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041D600[];
extern char lbl_804CF460[];
extern char lbl_80534728[];
void beStaticInfoCtl_register();
void *beStaticInfoCtl_getMetaCall();
}
extern "C" {
void fn_802B82B0(){
 fn_80066188((int)beStaticInfoCtl_register);
}
void beStaticInfoCtl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534728,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beStaticInfoCtl_getMetaCall,(int)lbl_8041D600,36,(int)beStaticInfoCtl_vtableRead,(int)beStaticInfoCtl_fieldInit,0,(int)lbl_804CF460);
}
void *beStaticInfoCtl_getMetaCall(){return beStaticInfoCtl_getMeta();}
}
#pragma pop
