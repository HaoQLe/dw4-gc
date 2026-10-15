#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beSelectCtrl_registerNow();
extern char lbl_8041CA68[];
extern char lbl_804CF768[];
extern char lbl_804CF784[];
extern void *lbl_805347E8;
extern void *beSelectCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802BA8E4(){
 if(!lbl_805347E8) lbl_805347E8=fn_800635C8(lbl_8041CA68,lbl_804CF768,lbl_804CF784,0x7);
 return lbl_805347E8;
}
void *beSelectCtrl_create(void *object){
 beSelectCtrl_registerNow();
 return meta_createInstance(beSelectCtrl_meta,object);
}
void *beSelectCtrl_metaObject(){
 if(!beSelectCtrl_meta) beSelectCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSelectCtrl_meta;
}
void *beSelectCtrl_getMeta(){
 if(!beSelectCtrl_meta || !(reinterpret_cast<unsigned int *>(beSelectCtrl_meta)[0x24/4]&4)) beSelectCtrl_registerNow();
 return beSelectCtrl_meta;
}
}
#pragma pop
