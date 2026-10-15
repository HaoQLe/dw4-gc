#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWSaveIntf_arkRegister();
extern char lbl_80453438[];
extern char lbl_804E22C0[];
extern char lbl_804E22DC[];
extern void *lbl_80536050;
extern void *beNDMWSaveIntf_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_803358F8(){
 if(!lbl_80536050) lbl_80536050=fn_800635C8(lbl_80453438,lbl_804E22C0,lbl_804E22DC,0x7);
 return lbl_80536050;
}
void *beNDMWSaveIntf_create(void *object){
 beNDMWSaveIntf_arkRegister();
 return meta_createInstance(beNDMWSaveIntf_meta,object);
}
void *beNDMWSaveIntf_metaObject(){
 if(!beNDMWSaveIntf_meta) beNDMWSaveIntf_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWSaveIntf_meta;
}
void *beNDMWSaveIntf_getMeta(){
 if(!beNDMWSaveIntf_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveIntf_meta)[0x24/4]&4)) beNDMWSaveIntf_arkRegister();
 return beNDMWSaveIntf_meta;
}
}
#pragma pop
