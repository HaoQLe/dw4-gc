#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beLightCtrl_arkRegister();
extern char lbl_8041CA68[];
extern char lbl_804D18FC[];
extern char lbl_804D1900[];
extern void *lbl_80535144;
extern void *beLightCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D2D88(){
 if(!lbl_80535144) lbl_80535144=fn_800635C8(lbl_8041CA68,lbl_804D18FC,lbl_804D1900,0x1);
 return lbl_80535144;
}
void *beLightCtrl_create(void *object){
 beLightCtrl_arkRegister();
 return meta_createInstance(beLightCtrl_meta,object);
}
void *beLightCtrl_metaObject(){
 if(!beLightCtrl_meta) beLightCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLightCtrl_meta;
}
void *beLightCtrl_getMeta(){
 if(!beLightCtrl_meta || !(reinterpret_cast<unsigned int *>(beLightCtrl_meta)[0x24/4]&4)) beLightCtrl_arkRegister();
 return beLightCtrl_meta;
}
}
#pragma pop
