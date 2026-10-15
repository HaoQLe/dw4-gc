#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beTextureCtrl_fieldInit();
void *beTextureCtrl_getMeta();
void beTextureCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beTextureCtrl_className[];
extern char lbl_804CF1E8[];
extern char beTextureCtrl_meta[];
void beTextureCtrl_register();
void *beTextureCtrl_getMetaCall();
}
extern "C" {
void beTextureCtrl_registerNow(){
 meta_registerNow((int)beTextureCtrl_register);
}
void beTextureCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTextureCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beTextureCtrl_getMetaCall,(int)beTextureCtrl_className,40,(int)beTextureCtrl_vtableRead,(int)beTextureCtrl_fieldInit,0,(int)lbl_804CF1E8);
}
void *beTextureCtrl_getMetaCall(){return beTextureCtrl_getMeta();}
}
#pragma pop
