#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beMatCtrl_fieldInit();
void *beMatCtrl_getMeta();
void beMatCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beMatCtrl_className[];
extern char lbl_804D177C[];
extern char beMatCtrl_meta[];
void beMatCtrl_register();
void *beMatCtrl_getMetaCall();
}
extern "C" {
void beMatCtrl_registerNow(){
 meta_registerNow((int)beMatCtrl_register);
}
void beMatCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beMatCtrl_getMetaCall,(int)beMatCtrl_className,68,(int)beMatCtrl_vtableRead,(int)beMatCtrl_fieldInit,0,(int)lbl_804D177C);
}
void *beMatCtrl_getMetaCall(){return beMatCtrl_getMeta();}
}
#pragma pop
