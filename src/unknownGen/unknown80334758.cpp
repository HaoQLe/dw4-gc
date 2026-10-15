#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWStageCtlInfo_getMeta();
void beNDMWStageCtlInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWStageCtl_arkRegister();
extern char lbl_80453438[];
extern char beNDMWStageCtlInfo_className[];
extern char lbl_804E2124[];
extern char lbl_804E2130[];
extern char beNDMWStageCtlInfo_meta[];
extern void *lbl_80535FD0;
extern void *beNDMWStageCtl_meta;
extern void *lbl_805621F4;
void beNDMWStageCtlInfo_register();
void *beNDMWStageCtlInfo_getMetaCall();
}
extern "C" {
void beNDMWStageCtlInfo_arkRegister(){
 meta_registerNow((int)beNDMWStageCtlInfo_register);
}
void beNDMWStageCtlInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStageCtlInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWStageCtlInfo_getMetaCall,(int)beNDMWStageCtlInfo_className,28,(int)beNDMWStageCtlInfo_vtableRead,0,0,0);
}
void *beNDMWStageCtlInfo_getMetaCall(){return beNDMWStageCtlInfo_getMeta();}
void *fn_8033480C(){
 if(!lbl_80535FD0) lbl_80535FD0=fn_800635C8(lbl_80453438,lbl_804E2124,lbl_804E2130,0x3);
 return lbl_80535FD0;
}
void *beNDMWStageCtl_create(void *object){
 beNDMWStageCtl_arkRegister();
 return meta_createInstance(beNDMWStageCtl_meta,object);
}
void *beNDMWStageCtl_metaObject(){
 if(!beNDMWStageCtl_meta) beNDMWStageCtl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWStageCtl_meta;
}
void *beNDMWStageCtl_getMeta(){
 if(!beNDMWStageCtl_meta || !(reinterpret_cast<unsigned int *>(beNDMWStageCtl_meta)[0x24/4]&4)) beNDMWStageCtl_arkRegister();
 return beNDMWStageCtl_meta;
}
}
#pragma pop
