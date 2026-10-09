#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beLayerCtl_fieldInit();
void *beLayerCtl_getMeta();
void beLayerCtl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041FC14[];
extern char lbl_804D197C[];
extern char lbl_80535168[];
void beLayerCtl_register();
void *beLayerCtl_getMetaCall();
}
extern "C" {
void fn_802D3BD4(){
 fn_80066188((int)beLayerCtl_register);
}
void beLayerCtl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535168,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beLayerCtl_getMetaCall,(int)lbl_8041FC14,40,(int)beLayerCtl_vtableRead,(int)beLayerCtl_fieldInit,0,(int)lbl_804D197C);
}
void *beLayerCtl_getMetaCall(){return beLayerCtl_getMeta();}
}
#pragma pop
