#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWLogo_registerNow();
extern char lbl_80453438[];
extern char lbl_804E2B04[];
extern char lbl_804E2B08[];
extern void *lbl_80536254;
extern void *beNDMWLogo_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033BD44(){
 if(!lbl_80536254) lbl_80536254=fn_800635C8(lbl_80453438,lbl_804E2B04,lbl_804E2B08,0x1);
 return lbl_80536254;
}
void *beNDMWLogo_create(void *object){
 beNDMWLogo_registerNow();
 return meta_createInstance(beNDMWLogo_meta,object);
}
void *beNDMWLogo_metaObject(){
 if(!beNDMWLogo_meta) beNDMWLogo_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLogo_meta;
}
void *beNDMWLogo_getMeta(){
 if(!beNDMWLogo_meta || !(reinterpret_cast<unsigned int *>(beNDMWLogo_meta)[0x24/4]&4)) beNDMWLogo_registerNow();
 return beNDMWLogo_meta;
}
}
#pragma pop
