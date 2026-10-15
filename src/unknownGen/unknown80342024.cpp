#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWLoadCtrl2_registerNow();
extern char lbl_80453438[];
extern char lbl_804E3CA8[];
extern char lbl_804E3CB8[];
extern void *lbl_80536714;
extern void *beNDMWLoadCtrl2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80342024(){
 if(!lbl_80536714) lbl_80536714=fn_800635C8(lbl_80453438,lbl_804E3CA8,lbl_804E3CB8,0x4);
 return lbl_80536714;
}
void *beNDMWLoadCtrl2_create(void *object){
 beNDMWLoadCtrl2_registerNow();
 return meta_createInstance(beNDMWLoadCtrl2_meta,object);
}
void *beNDMWLoadCtrl2_metaObject(){
 if(!beNDMWLoadCtrl2_meta) beNDMWLoadCtrl2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadCtrl2_meta;
}
void *beNDMWLoadCtrl2_getMeta(){
 if(!beNDMWLoadCtrl2_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadCtrl2_meta)[0x24/4]&4)) beNDMWLoadCtrl2_registerNow();
 return beNDMWLoadCtrl2_meta;
}
}
#pragma pop
