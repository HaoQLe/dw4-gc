#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void *beChangePosTransform_getMeta();
void beChangePosTransform_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void beCameraMode_arkRegister();
extern char beChangePosTransform_className[];
extern char beChangePosTransform_fieldTypes[];
extern char beChangePosTransform_fieldNames[];
extern char beChangePosTransform_fieldStorage[];
extern char beChangePosTransform_fieldOffsets[];
extern void *beChangePosTransform_meta;
extern void *beCameraMode_meta;
extern void *lbl_805621F4;
void beChangePosTransform_register();
void *beChangePosTransform_getMetaCall();
void beChangePosTransform_fieldInit();
}
extern "C" {
void beChangePosTransform_arkRegister(){
 meta_registerNow((int)beChangePosTransform_register);
}
void beChangePosTransform_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beChangePosTransform_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beChangePosTransform_getMetaCall,(int)beChangePosTransform_className,44,(int)beChangePosTransform_vtableRead,(int)beChangePosTransform_fieldInit,0,0);
}
void *beChangePosTransform_getMetaCall(){return beChangePosTransform_getMeta();}
void beChangePosTransform_fieldInit(){
 void *meta=beChangePosTransform_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beChangePosTransform_fieldTypes,0x1);
 meta_setupFields(meta,beChangePosTransform_fieldNames,beChangePosTransform_fieldStorage,beChangePosTransform_fieldOffsets,field);
}
void *beCameraMode_create(void *object){
 beCameraMode_arkRegister();
 return meta_createInstance(beCameraMode_meta,object);
}
void *beCameraMode_metaObject(){
 if(!beCameraMode_meta) beCameraMode_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCameraMode_meta;
}
void *beCameraMode_getMeta(){
 if(!beCameraMode_meta || !(reinterpret_cast<unsigned int *>(beCameraMode_meta)[0x24/4]&4)) beCameraMode_arkRegister();
 return beCameraMode_meta;
}
}
#pragma pop
