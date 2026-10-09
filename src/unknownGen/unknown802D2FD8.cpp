#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beLightCtrl_getMeta();
void beLightCtrl_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void fn_802D3174();
extern char lbl_8041FB64[];
extern char lbl_80535148[];
extern void *lbl_8053514C;
void beLightCtrl_register();
void *beLightCtrl_getMetaCall();
}
extern "C" {
void fn_802D2FD8(){
 fn_80066188((int)beLightCtrl_register);
}
void beLightCtrl_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535148,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beLightCtrl_getMetaCall,(int)lbl_8041FB64,32,(int)beLightCtrl_vtableRead,0,0,0);
}
void *beLightCtrl_getMetaCall(){return beLightCtrl_getMeta();}
void *beLayerInfoRam_getMeta(){
 if(!lbl_8053514C || !(reinterpret_cast<unsigned int *>(lbl_8053514C)[0x24/4]&4)) fn_802D3174();
 return lbl_8053514C;
}
}
#pragma pop
