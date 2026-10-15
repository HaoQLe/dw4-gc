#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beSelectCtrl_fieldInit();
void *beSelectCtrl_getMeta();
void beSelectCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beSelectCtrl_className[];
extern char beSelectCtrl_dependencies[];
extern char beSelectCtrl_meta[];
void beSelectCtrl_register();
void *beSelectCtrl_getMetaCall();
}
extern "C" {
void beSelectCtrl_arkRegister(){
 meta_registerNow((int)beSelectCtrl_register);
}
void beSelectCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSelectCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSelectCtrl_getMetaCall,(int)beSelectCtrl_className,40,(int)beSelectCtrl_vtableRead,(int)beSelectCtrl_fieldInit,0,(int)beSelectCtrl_dependencies);
}
void *beSelectCtrl_getMetaCall(){return beSelectCtrl_getMeta();}
}
#pragma pop
