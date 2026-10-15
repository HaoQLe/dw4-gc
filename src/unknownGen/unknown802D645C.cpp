#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beHitLandDeliv_getMeta();
void beHitLandDeliv_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beGroupKeepList_arkRegister();
extern char beHitLandDeliv_className[];
extern char beHitLandDeliv_meta[];
extern void *beGroupKeepList_meta;
extern void *lbl_805621F4;
void beHitLandDeliv_register();
void *beHitLandDeliv_getMetaCall();
}
extern "C" {
void beHitLandDeliv_arkRegister(){
 meta_registerNow((int)beHitLandDeliv_register);
}
void beHitLandDeliv_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beHitLandDeliv_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beHitLandDeliv_getMetaCall,(int)beHitLandDeliv_className,32,(int)beHitLandDeliv_vtableRead,0,0,0);
}
void *beHitLandDeliv_getMetaCall(){return beHitLandDeliv_getMeta();}
void *beGroupKeepList_metaObject(){
 if(!beGroupKeepList_meta) beGroupKeepList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beGroupKeepList_meta;
}
void *beGroupKeepList_getMeta(){
 if(!beGroupKeepList_meta || !(reinterpret_cast<unsigned int *>(beGroupKeepList_meta)[0x24/4]&4)) beGroupKeepList_arkRegister();
 return beGroupKeepList_meta;
}
}
#pragma pop
