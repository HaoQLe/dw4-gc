#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl10_getMeta();
void beNDMWShopCtrl10_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrl00_registerNow();
extern char beNDMWShopCtrl10_className[];
extern char lbl_804E1D6C[];
extern char lbl_804E1D74[];
extern char lbl_804E1D7C[];
extern char lbl_804E1D84[];
extern void *beNDMWShopCtrl10_meta;
extern void *beNDMWShopCtrl00_meta;
void beNDMWShopCtrl10_register();
void *beNDMWShopCtrl10_getMetaCall();
void beNDMWShopCtrl10_fieldInit();
}
extern "C" {
void beNDMWShopCtrl10_registerNow(){
 meta_registerNow((int)beNDMWShopCtrl10_register);
}
void beNDMWShopCtrl10_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrl10_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl10_getMetaCall,(int)beNDMWShopCtrl10_className,92,(int)beNDMWShopCtrl10_vtableRead,(int)beNDMWShopCtrl10_fieldInit,0,0);
}
void *beNDMWShopCtrl10_getMetaCall(){return beNDMWShopCtrl10_getMeta();}
void beNDMWShopCtrl10_fieldInit(){
 void *meta=beNDMWShopCtrl10_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D6C,0x2);
 fn_800659C0(meta,lbl_804E1D74,lbl_804E1D7C,lbl_804E1D84,field);
}
void *beNDMWShopCtrl00_create(void *object){
 beNDMWShopCtrl00_registerNow();
 return meta_createInstance(beNDMWShopCtrl00_meta,object);
}
void *beNDMWShopCtrl00_getMeta(){
 if(!beNDMWShopCtrl00_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrl00_meta)[0x24/4]&4)) beNDMWShopCtrl00_registerNow();
 return beNDMWShopCtrl00_meta;
}
}
#pragma pop
