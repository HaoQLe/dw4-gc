#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void beMatCtrl_arkRegister();
extern char lbl_8041CD10[];
extern char lbl_804D174C[];
extern char lbl_804D1764[];
extern void *lbl_805350CC;
extern void *beMatCtrl_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *fn_802D1124(){
 if(!lbl_805350CC) lbl_805350CC=fn_800635C8(lbl_8041CD10,lbl_804D174C,lbl_804D1764,0x6);
 return lbl_805350CC;
}
void *beMatCtrl_create(void *object){
 beMatCtrl_arkRegister();
 return meta_createInstance(beMatCtrl_meta,object);
}
void *beMatCtrl_metaObject(){
 if(!beMatCtrl_meta) beMatCtrl_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beMatCtrl_meta;
}
void *beMatCtrl_getMeta(){
 if(!beMatCtrl_meta || !(reinterpret_cast<unsigned int *>(beMatCtrl_meta)[0x24/4]&4)) beMatCtrl_arkRegister();
 return beMatCtrl_meta;
}
}
#pragma pop
