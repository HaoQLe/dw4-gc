#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beMeterCtrl_registerNow();
extern char lbl_8041CA68[];
extern char lbl_804D130C[];
extern char lbl_804D132C[];
extern void *lbl_80534FB4;
extern void *beMeterCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802CDBC0(){
 if(!lbl_80534FB4) lbl_80534FB4=fn_800635C8(lbl_8041CA68,lbl_804D130C,lbl_804D132C,0x8);
 return lbl_80534FB4;
}
void *beMeterCtrl_create(void *object){
 beMeterCtrl_registerNow();
 return meta_createInstance(beMeterCtrl_meta,object);
}
void *beMeterCtrl_metaObject(){
 if(!beMeterCtrl_meta) beMeterCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMeterCtrl_meta;
}
void *beMeterCtrl_getMeta(){
 if(!beMeterCtrl_meta || !(reinterpret_cast<unsigned int *>(beMeterCtrl_meta)[0x24/4]&4)) beMeterCtrl_registerNow();
 return beMeterCtrl_meta;
}
}
#pragma pop
