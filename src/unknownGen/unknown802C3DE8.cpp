#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNumberCtrlInfo_getMeta();
void beNumberCtrlInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beNumberCtrl_arkRegister();
extern char lbl_8041CD10[];
extern char beNumberCtrlInfo_className[];
extern char lbl_804D0450[];
extern char lbl_804D0460[];
extern char beNumberCtrlInfo_meta[];
extern void *lbl_80534B8C;
extern void *beNumberCtrl_meta;
extern void *lbl_805621F4;
void beNumberCtrlInfo_register();
void *beNumberCtrlInfo_getMetaCall();
}
extern "C" {
void beNumberCtrlInfo_arkRegister(){
 meta_registerNow((int)beNumberCtrlInfo_register);
}
void beNumberCtrlInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beNumberCtrlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNumberCtrlInfo_getMetaCall,(int)beNumberCtrlInfo_className,28,(int)beNumberCtrlInfo_vtableRead,0,0,0);
}
void *beNumberCtrlInfo_getMetaCall(){return beNumberCtrlInfo_getMeta();}
void *fn_802C3E9C(){
 if(!lbl_80534B8C) lbl_80534B8C=fn_800635C8(lbl_8041CD10,lbl_804D0450,lbl_804D0460,0x4);
 return lbl_80534B8C;
}
void *beNumberCtrl_create(void *object){
 beNumberCtrl_arkRegister();
 return meta_createInstance(beNumberCtrl_meta,object);
}
void *beNumberCtrl_metaObject(){
 if(!beNumberCtrl_meta) beNumberCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNumberCtrl_meta;
}
void *beNumberCtrl_getMeta(){
 if(!beNumberCtrl_meta || !(reinterpret_cast<unsigned int *>(beNumberCtrl_meta)[0x24/4]&4)) beNumberCtrl_arkRegister();
 return beNumberCtrl_meta;
}
}
#pragma pop
