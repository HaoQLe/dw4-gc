#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beNDMWSaveCtrl_arkRegister();
extern char lbl_80453438[];
extern char lbl_804E23A4[];
extern char lbl_804E23B4[];
extern void *lbl_8053608C;
extern void *beNDMWSaveCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_8033627C(){
 if(!lbl_8053608C) lbl_8053608C=fn_800635C8(lbl_80453438,lbl_804E23A4,lbl_804E23B4,0x4);
 return lbl_8053608C;
}
void *beNDMWSaveCtrl_create(void *object){
 beNDMWSaveCtrl_arkRegister();
 return meta_createInstance(beNDMWSaveCtrl_meta,object);
}
void *beNDMWSaveCtrl_metaObject(){
 if(!beNDMWSaveCtrl_meta) beNDMWSaveCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWSaveCtrl_meta;
}
void *beNDMWSaveCtrl_getMeta(){
 if(!beNDMWSaveCtrl_meta || !(reinterpret_cast<unsigned int *>(beNDMWSaveCtrl_meta)[0x24/4]&4)) beNDMWSaveCtrl_arkRegister();
 return beNDMWSaveCtrl_meta;
}
}
#pragma pop
