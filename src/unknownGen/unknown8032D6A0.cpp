#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlEditBit_getMeta();
void beNDMWShopCtrlEditBit_vtableRead();
void beNDMWWindowCtrl_register();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void beNDMWShopCtrlDigilabo_registerNow();
extern char beNDMWShopCtrlEditBit_className[];
extern char lbl_804E1BF0[];
extern char lbl_804E1BF8[];
extern char lbl_804E1C00[];
extern char lbl_804E1C08[];
extern void *beNDMWShopCtrlEditBit_meta;
extern void *beNDMWShopCtrlDigilabo_meta;
void beNDMWShopCtrlEditBit_register();
void *beNDMWShopCtrlEditBit_getMetaCall();
void beNDMWShopCtrlEditBit_fieldInit();
}
extern "C" {
void beNDMWShopCtrlEditBit_registerNow(){
 meta_registerNow((int)beNDMWShopCtrlEditBit_register);
}
void beNDMWShopCtrlEditBit_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWShopCtrlEditBit_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlEditBit_getMetaCall,(int)beNDMWShopCtrlEditBit_className,92,(int)beNDMWShopCtrlEditBit_vtableRead,(int)beNDMWShopCtrlEditBit_fieldInit,0,0);
}
void *beNDMWShopCtrlEditBit_getMetaCall(){return beNDMWShopCtrlEditBit_getMeta();}
void beNDMWShopCtrlEditBit_fieldInit(){
 void *meta=beNDMWShopCtrlEditBit_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804E1BF0,0x2);
 meta_setupFields(meta,lbl_804E1BF8,lbl_804E1C00,lbl_804E1C08,field);
}
void *beNDMWShopCtrlDigilabo_create(void *object){
 beNDMWShopCtrlDigilabo_registerNow();
 return meta_createInstance(beNDMWShopCtrlDigilabo_meta,object);
}
void *beNDMWShopCtrlDigilabo_getMeta(){
 if(!beNDMWShopCtrlDigilabo_meta || !(reinterpret_cast<unsigned int *>(beNDMWShopCtrlDigilabo_meta)[0x24/4]&4)) beNDMWShopCtrlDigilabo_registerNow();
 return beNDMWShopCtrlDigilabo_meta;
}
}
#pragma pop
