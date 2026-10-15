#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beSwitchCtrl_getMeta();
void beSwitchCtrl_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beStaticInfoCtl_arkRegister();
extern char lbl_8041CD10[];
extern char beSwitchCtrl_className[];
extern char lbl_804CF458[];
extern char lbl_804CF45C[];
extern char beSwitchCtrl_meta[];
extern void *lbl_80534724;
extern void *beStaticInfoCtl_meta;
extern void *lbl_805621F4;
void beSwitchCtrl_register();
void *beSwitchCtrl_getMetaCall();
}
extern "C" {
void beSwitchCtrl_arkRegister(){
 meta_registerNow((int)beSwitchCtrl_register);
}
void beSwitchCtrl_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSwitchCtrl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beSwitchCtrl_getMetaCall,(int)beSwitchCtrl_className,32,(int)beSwitchCtrl_vtableRead,0,0,0);
}
void *beSwitchCtrl_getMetaCall(){return beSwitchCtrl_getMeta();}
void *fn_802B8018(){
 if(!lbl_80534724) lbl_80534724=fn_800635C8(lbl_8041CD10,lbl_804CF458,lbl_804CF45C,0x1);
 return lbl_80534724;
}
void *beStaticInfoCtl_create(void *object){
 beStaticInfoCtl_arkRegister();
 return meta_createInstance(beStaticInfoCtl_meta,object);
}
void *beStaticInfoCtl_metaObject(){
 if(!beStaticInfoCtl_meta) beStaticInfoCtl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beStaticInfoCtl_meta;
}
void *beStaticInfoCtl_getMeta(){
 if(!beStaticInfoCtl_meta || !(reinterpret_cast<unsigned int *>(beStaticInfoCtl_meta)[0x24/4]&4)) beStaticInfoCtl_arkRegister();
 return beStaticInfoCtl_meta;
}
}
#pragma pop
