#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl50_getMeta();
void beNDMWShopCtrl50_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrl40_registerNow();
extern char beNDMWShopCtrl50_className[];
extern char lbl_804E1CE4[];
extern char lbl_804E1CF8[];
extern char lbl_804E1D0C[];
extern char lbl_804E1D20[];
extern void *beNDMWShopCtrl50_meta;
extern void *beNDMWShopCtrl40_meta;
void beNDMWShopCtrl50_register();
void *beNDMWShopCtrl50_getMetaCall();
void beNDMWShopCtrl50_fieldInit();
}
extern "C" {
void beNDMWShopCtrl50_registerNow(){
 meta_registerNow((int)beNDMWShopCtrl50_register);
}
void beNDMWShopCtrl50_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrl50_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl50_getMetaCall,(int)beNDMWShopCtrl50_className,104,(int)beNDMWShopCtrl50_vtableRead,(int)beNDMWShopCtrl50_fieldInit,0,0);
}
void *beNDMWShopCtrl50_getMetaCall(){return beNDMWShopCtrl50_getMeta();}
void beNDMWShopCtrl50_fieldInit(){
 void *meta=beNDMWShopCtrl50_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1CE4,0x5);
 fn_800659C0(meta,lbl_804E1CF8,lbl_804E1D0C,lbl_804E1D20,field);
}
void *beNDMWShopCtrl40_create(void *object){
 beNDMWShopCtrl40_registerNow();
 return meta_createInstance(beNDMWShopCtrl40_meta,object);
}
void *beNDMWShopCtrl40_getMeta(){
 if(!beNDMWShopCtrl40_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl40_meta)[0x24/4]&4)) beNDMWShopCtrl40_registerNow();
 return beNDMWShopCtrl40_meta;
}
}
#pragma pop
