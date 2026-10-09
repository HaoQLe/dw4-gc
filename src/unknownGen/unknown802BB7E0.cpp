#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSeCtl_fieldInit();
void *beSeCtl_getMeta();
void beSeCtl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041DA3C[];
extern char lbl_804CF808[];
extern char lbl_80534814[];
void beSeCtl_register();
void *beSeCtl_getMetaCall();
}
extern "C" {
void fn_802BB7E0(){
 fn_80066188((int)beSeCtl_register);
}
void beSeCtl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534814,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSeCtl_getMetaCall,(int)lbl_8041DA3C,36,(int)beSeCtl_vtableRead,(int)beSeCtl_fieldInit,0,(int)lbl_804CF808);
}
void *beSeCtl_getMetaCall(){return beSeCtl_getMeta();}
}
#pragma pop
