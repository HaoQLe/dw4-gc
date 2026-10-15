#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beCameraCtrl_arkRegister();
extern char lbl_8041CA68[];
extern char lbl_804D2B40[];
extern char lbl_804D2B7C[];
extern void *lbl_8053565C;
extern void *beCameraCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802E247C(){
 if(!lbl_8053565C) lbl_8053565C=fn_800635C8(lbl_8041CA68,lbl_804D2B40,lbl_804D2B7C,0xF);
 return lbl_8053565C;
}
void *beCameraCtrl_create(void *object){
 beCameraCtrl_arkRegister();
 return meta_createInstance(beCameraCtrl_meta,object);
}
void *beCameraCtrl_metaObject(){
 if(!beCameraCtrl_meta) beCameraCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beCameraCtrl_meta;
}
void *beCameraCtrl_getMeta(){
 if(!beCameraCtrl_meta || !(reinterpret_cast<unsigned int *>(beCameraCtrl_meta)[0x24/4]&4)) beCameraCtrl_arkRegister();
 return beCameraCtrl_meta;
}
}
#pragma pop
