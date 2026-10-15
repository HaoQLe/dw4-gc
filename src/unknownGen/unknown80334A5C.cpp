#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beNDMWStageCtl_getMeta();
void beNDMWStageCtl_vtableRead();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
void beNDMWSaveIntfInfo_registerNow();
extern char beNDMWStageCtl_className[];
extern char lbl_804E213C[];
extern char lbl_804E2140[];
extern char lbl_804E2144[];
extern char lbl_804E2148[];
extern void *beNDMWStageCtl_meta;
extern void *beNDMWSaveIntfInfo_meta;
void beNDMWStageCtl_register();
void *beNDMWStageCtl_getMetaCall();
void beNDMWStageCtl_fieldInit();
}
extern "C" {
void beNDMWStageCtl_registerNow(){
 meta_registerNow((int)beNDMWStageCtl_register);
}
void beNDMWStageCtl_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWStageCtl_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWStageCtl_getMetaCall,(int)beNDMWStageCtl_className,40,(int)beNDMWStageCtl_vtableRead,(int)beNDMWStageCtl_fieldInit,0,0);
}
void *beNDMWStageCtl_getMetaCall(){return beNDMWStageCtl_getMeta();}
void beNDMWStageCtl_fieldInit(){
 void *meta=beNDMWStageCtl_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E213C,0x1);
 meta_setupFields(meta,lbl_804E2140,lbl_804E2144,lbl_804E2148,field);
}
void *beNDMWSaveIntfInfo_getMeta(){
 if(!beNDMWSaveIntfInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveIntfInfo_meta)[0x24/4]&4)) beNDMWSaveIntfInfo_registerNow();
 return beNDMWSaveIntfInfo_meta;
}
}
#pragma pop
