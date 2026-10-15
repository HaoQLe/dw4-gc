#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beMeterCtrl_getMeta();
void beMeterCtrl_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beMessenger_arkRegister();
extern char beMeterCtrl_className[];
extern char beMeterCtrl_meta[];
extern void *beMessenger_meta;
extern void *lbl_805621F4;
void beMeterCtrl_register();
void *beMeterCtrl_getMetaCall();
}
extern "C" {
void beMeterCtrl_arkRegister(){
 meta_registerNow((int)beMeterCtrl_register);
}
void beMeterCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMeterCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beMeterCtrl_getMetaCall,(int)beMeterCtrl_className,32,(int)beMeterCtrl_vtableRead,0,0,0);
}
void *beMeterCtrl_getMetaCall(){return beMeterCtrl_getMeta();}
void *beMessenger_create(void *object){
 beMessenger_arkRegister();
 return meta_createInstance(beMessenger_meta,object);
}
void *beMessenger_metaObject(){
 if(!beMessenger_meta) beMessenger_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMessenger_meta;
}
void *beMessenger_getMeta(){
 if(!beMessenger_meta || !(reinterpret_cast<unsigned int *>(beMessenger_meta)[0x24/4]&4)) beMessenger_arkRegister();
 return beMessenger_meta;
}
}
#pragma pop
