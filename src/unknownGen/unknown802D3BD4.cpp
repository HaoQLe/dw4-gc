#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beLayerCtl_fieldInit();
void *beLayerCtl_getMeta();
void beLayerCtl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beLayerCtl_className[];
extern char beLayerCtl_dependencies[];
extern char beLayerCtl_meta[];
void beLayerCtl_register();
void *beLayerCtl_getMetaCall();
}
extern "C" {
void beLayerCtl_arkRegister(){
 meta_registerNow((int)beLayerCtl_register);
}
void beLayerCtl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLayerCtl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beLayerCtl_getMetaCall,(int)beLayerCtl_className,40,(int)beLayerCtl_vtableRead,(int)beLayerCtl_fieldInit,0,(int)beLayerCtl_dependencies);
}
void *beLayerCtl_getMetaCall(){return beLayerCtl_getMeta();}
}
#pragma pop
