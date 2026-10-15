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
