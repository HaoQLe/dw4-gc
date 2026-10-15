#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beBkColor_getMeta();
void beBkColor_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beBaseInfoRamList_arkRegister();
extern char beBkColor_className[];
extern char beBkColor_fieldTypes[];
extern char beBkColor_fieldNames[];
extern char beBkColor_fieldStorage[];
extern char beBkColor_fieldOffsets[];
extern void *beBkColor_meta;
extern void *beBaseInfoRamList_meta;
extern void *lbl_805621F4;
void beBkColor_register();
void *beBkColor_getMetaCall();
void beBkColor_fieldInit();
}
extern "C" {
void beBkColor_arkRegister(){
 meta_registerNow((int)beBkColor_register);
}
void beBkColor_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beBkColor_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beBkColor_getMetaCall,(int)beBkColor_className,36,(int)beBkColor_vtableRead,(int)beBkColor_fieldInit,0,0);
}
void *beBkColor_getMetaCall(){return beBkColor_getMeta();}
void beBkColor_fieldInit(){
 void *meta=beBkColor_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beBkColor_fieldTypes,0x1);
 meta_setupFields(meta,beBkColor_fieldNames,beBkColor_fieldStorage,beBkColor_fieldOffsets,field);
}
void *beBaseInfoRamList_metaObject(){
 if(!beBaseInfoRamList_meta) beBaseInfoRamList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBaseInfoRamList_meta;
}
void *beBaseInfoRamList_getMeta(){
 if(!beBaseInfoRamList_meta || !(reinterpret_cast<unsigned int *>(beBaseInfoRamList_meta)[0x24/4]&4)) beBaseInfoRamList_arkRegister();
 return beBaseInfoRamList_meta;
}
}
#pragma pop
