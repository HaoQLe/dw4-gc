#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWTitle2_registerNow();
extern char lbl_80453438[];
extern char lbl_804E196C[];
extern char lbl_804E1974[];
extern void *lbl_80535D28;
extern void *beNDMWTitle2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_80326780(){
 if(!lbl_80535D28) lbl_80535D28=fn_800635C8(lbl_80453438,lbl_804E196C,lbl_804E1974,0x2);
 return lbl_80535D28;
}
void *beNDMWTitle2_create(void *object){
 beNDMWTitle2_registerNow();
 return meta_createInstance(beNDMWTitle2_meta,object);
}
void *beNDMWTitle2_metaObject(){
 if(!beNDMWTitle2_meta) beNDMWTitle2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWTitle2_meta;
}
void *beNDMWTitle2_getMeta(){
 if(!beNDMWTitle2_meta || !(reinterpret_cast<unsigned int *>(beNDMWTitle2_meta)[0x24/4]&4)) beNDMWTitle2_registerNow();
 return beNDMWTitle2_meta;
}
}
#pragma pop
