#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beBkColorInfo_getMeta();
void beBkColorInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beBkColor_arkRegister();
extern char beBkColorInfo_className[];
extern char beBkColorInfo_fieldTypes[];
extern char beBkColorInfo_fieldNames[];
extern char beBkColorInfo_fieldStorage[];
extern char beBkColorInfo_fieldOffsets[];
extern void *beBkColorInfo_meta;
extern void *beBkColor_meta;
extern void *lbl_805621F4;
void beBkColorInfo_register();
void *beBkColorInfo_getMetaCall();
void beBkColorInfo_fieldInit();
}
extern "C" {
void beBkColorInfo_arkRegister(){
 meta_registerNow((int)beBkColorInfo_register);
}
void beBkColorInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beBkColorInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beBkColorInfo_getMetaCall,(int)beBkColorInfo_className,44,(int)beBkColorInfo_vtableRead,(int)beBkColorInfo_fieldInit,0,0);
}
void *beBkColorInfo_getMetaCall(){return beBkColorInfo_getMeta();}
void beBkColorInfo_fieldInit(){
 void *meta=beBkColorInfo_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beBkColorInfo_fieldTypes,0x1);
 meta_setupFields(meta,beBkColorInfo_fieldNames,beBkColorInfo_fieldStorage,beBkColorInfo_fieldOffsets,field);
}
void *beBkColor_create(void *object){
 beBkColor_arkRegister();
 return meta_createInstance(beBkColor_meta,object);
}
void *beBkColor_metaObject(){
 if(!beBkColor_meta) beBkColor_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beBkColor_meta;
}
void *beBkColor_getMeta(){
 if(!beBkColor_meta || !(reinterpret_cast<unsigned int *>(beBkColor_meta)[0x24/4]&4)) beBkColor_arkRegister();
 return beBkColor_meta;
}
}
#pragma pop
