#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beChangePosTransformInfo_getMeta();
void beChangePosTransformInfo_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
void beChangePosTransform_registerNow();
extern char beChangePosTransformInfo_className[];
extern char beChangePosTransformInfo_meta[];
extern void *beChangePosTransform_meta;
extern void *lbl_805621F4;
void beChangePosTransformInfo_register();
void *beChangePosTransformInfo_getMetaCall();
}
extern "C" {
void beChangePosTransformInfo_registerNow(){
 meta_registerNow((int)beChangePosTransformInfo_register);
}
void beChangePosTransformInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beChangePosTransformInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beChangePosTransformInfo_getMetaCall,(int)beChangePosTransformInfo_className,28,(int)beChangePosTransformInfo_vtableRead,0,0,0);
}
void *beChangePosTransformInfo_getMetaCall(){return beChangePosTransformInfo_getMeta();}
void *beChangePosTransform_create(void *object){
 beChangePosTransform_registerNow();
 return meta_createInstance(beChangePosTransform_meta,object);
}
void *beChangePosTransform_metaObject(){
 if(!beChangePosTransform_meta) beChangePosTransform_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beChangePosTransform_meta;
}
void *beChangePosTransform_getMeta(){
 if(!beChangePosTransform_meta || !(reinterpret_cast<unsigned int *>(beChangePosTransform_meta)[0x24/4]&4)) beChangePosTransform_registerNow();
 return beChangePosTransform_meta;
}
}
#pragma pop
