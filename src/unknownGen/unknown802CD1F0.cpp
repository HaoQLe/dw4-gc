#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMeterCtrlNode_fieldInit();
void *beMeterCtrlNode_getMeta();
void beMeterCtrlNode_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_802B1AC8();
void *fn_802CD360();
void igGroup_register();
extern char beMeterCtrlNode_className[];
extern char lbl_804D11C8[];
extern char beMeterCtrlNode_meta[];
void beMeterCtrlNode_register();
void *beMeterCtrlNode_getMetaCall();
}
extern "C" {
void beMeterCtrlNode_registerNow(){
 meta_registerNow((int)beMeterCtrlNode_register);
}
void beMeterCtrlNode_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMeterCtrlNode_meta,(int)igGroup_register,(int)fn_8011148C,(int)beMeterCtrlNode_getMetaCall,(int)beMeterCtrlNode_className,52,(int)beMeterCtrlNode_vtableRead,(int)beMeterCtrlNode_fieldInit,(int)fn_802CD360,(int)lbl_804D11C8);
}
void *beMeterCtrlNode_getMetaCall(){return beMeterCtrlNode_getMeta();}
}
#pragma pop
