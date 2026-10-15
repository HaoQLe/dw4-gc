#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *bePadManager_metaObject();
void beNDMWMdlPlayerInfoWork_arkRegister();
void *beNDMWGameRam_metaObject();
void *igViewerSceneInfoManager_metaObject();
extern char beNDMWMdlPlayer_fieldTypes[];
extern char beNDMWMdlPlayer_fieldNames[];
extern char beNDMWMdlPlayer_fieldStorage[];
extern char beNDMWMdlPlayer_fieldOffsets[];
extern void *beNDMWMdlPlayer_meta;
extern void *beNDMWMdlPlayerInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beNDMWMdlPlayer_fieldInit(){
 void *value0=beNDMWMdlPlayer_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNDMWMdlPlayer_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=igViewerSceneInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beNDMWGameRam_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 meta_setupFields(value0,beNDMWMdlPlayer_fieldNames,beNDMWMdlPlayer_fieldStorage,beNDMWMdlPlayer_fieldOffsets,value1);
}
void *beNDMWMdlPlayerInfoWork_create(void *object){
 beNDMWMdlPlayerInfoWork_arkRegister();
 return meta_createInstance(beNDMWMdlPlayerInfoWork_meta,object);
}
void *beNDMWMdlPlayerInfoWork_metaObject(){
 if(!beNDMWMdlPlayerInfoWork_meta) beNDMWMdlPlayerInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlPlayerInfoWork_meta;
}
void *beNDMWMdlPlayerInfoWork_getMeta(){
 if(!beNDMWMdlPlayerInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayerInfoWork_meta)[0x24/4]&4)) beNDMWMdlPlayerInfoWork_arkRegister();
 return beNDMWMdlPlayerInfoWork_meta;
}
}
#pragma pop
