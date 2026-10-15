#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void *bePadManager_metaObject();
void beNDMWMdlPlayerInfoWork_registerNow();
void *beNDMWGameRam_metaObject();
void *igViewerSceneInfoManager_metaObject();
extern char lbl_804E2780[];
extern char lbl_804E278C[];
extern char lbl_804E2798[];
extern char lbl_804E27A4[];
extern void *beNDMWMdlPlayer_meta;
extern void *beNDMWMdlPlayerInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void beNDMWMdlPlayer_fieldInit(){
 void *value0=beNDMWMdlPlayer_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804E2780,3);
 void *value2=fn_800658E4(value0,value1);
 void *value3=igViewerSceneInfoManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+60)=0;
 void *value4=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=bePadManager_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+60)=0;
 void *value6=fn_800658E4(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beNDMWGameRam_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+60)=0;
 fn_800659C0(value0,lbl_804E278C,lbl_804E2798,lbl_804E27A4,value1);
}
void *beNDMWMdlPlayerInfoWork_create(void *object){
 beNDMWMdlPlayerInfoWork_registerNow();
 return meta_createInstance(beNDMWMdlPlayerInfoWork_meta,object);
}
void *beNDMWMdlPlayerInfoWork_metaObject(){
 if(!beNDMWMdlPlayerInfoWork_meta) beNDMWMdlPlayerInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlPlayerInfoWork_meta;
}
void *beNDMWMdlPlayerInfoWork_getMeta(){
 if(!beNDMWMdlPlayerInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayerInfoWork_meta)[0x24/4]&4)) beNDMWMdlPlayerInfoWork_registerNow();
 return beNDMWMdlPlayerInfoWork_meta;
}
}
#pragma pop
