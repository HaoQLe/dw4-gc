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
void beNDMWSaveIntfInfo_arkRegister();
extern char beNDMWStageCtl_className[];
extern char beNDMWStageCtl_fieldTypes[];
extern char beNDMWStageCtl_fieldNames[];
extern char beNDMWStageCtl_fieldStorage[];
extern char beNDMWStageCtl_fieldOffsets[];
extern void *beNDMWStageCtl_meta;
extern void *beNDMWSaveIntfInfo_meta;
void beNDMWStageCtl_register();
void *beNDMWStageCtl_getMetaCall();
void beNDMWStageCtl_fieldInit();
}
extern "C" {
void beNDMWStageCtl_arkRegister(){
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
 meta_appendFields(meta,beNDMWStageCtl_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWStageCtl_fieldNames,beNDMWStageCtl_fieldStorage,beNDMWStageCtl_fieldOffsets,field);
}
void *beNDMWSaveIntfInfo_getMeta(){
 if(!beNDMWSaveIntfInfo_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveIntfInfo_meta)[0x24/4]&4)) beNDMWSaveIntfInfo_arkRegister();
 return beNDMWSaveIntfInfo_meta;
}
}
#pragma pop
