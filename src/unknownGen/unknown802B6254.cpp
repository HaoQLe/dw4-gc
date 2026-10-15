#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beTextureCtrlInfo_fieldInit();
void *beTextureCtrlInfo_getMeta();
void beTextureCtrlInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beTextureCtrlInfo_className[];
extern char lbl_804CF190[];
extern char beTextureCtrlInfo_meta[];
void beTextureCtrlInfo_register();
void *beTextureCtrlInfo_getMetaCall();
}
extern "C" {
void beTextureCtrlInfo_registerNow(){
 meta_registerNow((int)beTextureCtrlInfo_register);
}
void beTextureCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTextureCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beTextureCtrlInfo_getMetaCall,(int)beTextureCtrlInfo_className,36,(int)beTextureCtrlInfo_vtableRead,(int)beTextureCtrlInfo_fieldInit,0,(int)lbl_804CF190);
}
void *beTextureCtrlInfo_getMetaCall(){return beTextureCtrlInfo_getMeta();}
}
#pragma pop
