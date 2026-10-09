#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMeterCtrlNode_fieldInit();
void *beMeterCtrlNode_getMeta();
void beMeterCtrlNode_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void *fn_802CD360();
void igGroup_register();
extern char lbl_8041F530[];
extern char lbl_804D11C8[];
extern char lbl_80534F5C[];
void beMeterCtrlNode_register();
void *beMeterCtrlNode_getMetaCall();
}
extern "C" {
void fn_802CD1F0(){
 fn_80066188((int)beMeterCtrlNode_register);
}
void beMeterCtrlNode_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F5C,(int)igGroup_register,(int)fn_8011148C,(int)beMeterCtrlNode_getMetaCall,(int)lbl_8041F530,52,(int)beMeterCtrlNode_vtableRead,(int)beMeterCtrlNode_fieldInit,(int)fn_802CD360,(int)lbl_804D11C8);
}
void *beMeterCtrlNode_getMetaCall(){return beMeterCtrlNode_getMeta();}
}
#pragma pop
