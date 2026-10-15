#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWLoadIntf2_registerNow();
extern char lbl_80453438[];
extern char lbl_804E3514[];
extern char lbl_804E3534[];
extern void *lbl_80536500;
extern void *beNDMWLoadIntf2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033E504(){
 if(!lbl_80536500) lbl_80536500=fn_800635C8(lbl_80453438,lbl_804E3514,lbl_804E3534,0x8);
 return lbl_80536500;
}
void *beNDMWLoadIntf2_create(void *object){
 beNDMWLoadIntf2_registerNow();
 return meta_createInstance(beNDMWLoadIntf2_meta,object);
}
void *beNDMWLoadIntf2_metaObject(){
 if(!beNDMWLoadIntf2_meta) beNDMWLoadIntf2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadIntf2_meta;
}
void *beNDMWLoadIntf2_getMeta(){
 if(!beNDMWLoadIntf2_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2_meta)[0x24/4]&4)) beNDMWLoadIntf2_registerNow();
 return beNDMWLoadIntf2_meta;
}
}
#pragma pop
