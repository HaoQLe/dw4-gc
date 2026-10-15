#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beLightCtrl_getMeta();
void beLightCtrl_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beLayerInfoRam_arkRegister();
extern char beLightCtrl_className[];
extern char beLightCtrl_meta[];
extern void *beLayerInfoRam_meta;
void beLightCtrl_register();
void *beLightCtrl_getMetaCall();
}
extern "C" {
void beLightCtrl_arkRegister(){
 meta_registerNow((int)beLightCtrl_register);
}
void beLightCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLightCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beLightCtrl_getMetaCall,(int)beLightCtrl_className,32,(int)beLightCtrl_vtableRead,0,0,0);
}
void *beLightCtrl_getMetaCall(){return beLightCtrl_getMeta();}
void *beLayerInfoRam_getMeta(){
 if(!beLayerInfoRam_meta || !(reinterpret_cast<unsigned int *>(beLayerInfoRam_meta)[0x24/4]&4)) beLayerInfoRam_arkRegister();
 return beLayerInfoRam_meta;
}
}
#pragma pop
