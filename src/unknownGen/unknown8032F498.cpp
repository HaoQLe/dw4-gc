#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl30_getMeta();
void beNDMWShopCtrl30_vtableRead();
void beNDMWWindowCtrl_register();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void fn_8032F910();
extern char lbl_804539DC[];
extern char lbl_804E1D44[];
extern char lbl_804E1D48[];
extern char lbl_804E1D4C[];
extern char lbl_804E1D50[];
extern void *lbl_80535EA0;
extern void *lbl_80535EA8;
void beNDMWShopCtrl30_register();
void *beNDMWShopCtrl30_getMetaCall();
void beNDMWShopCtrl30_fieldInit();
}
extern "C" {
void fn_8032F498(){
 fn_80066188((int)beNDMWShopCtrl30_register);
}
void beNDMWShopCtrl30_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535EA0,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl30_getMetaCall,(int)lbl_804539DC,88,(int)beNDMWShopCtrl30_vtableRead,(int)beNDMWShopCtrl30_fieldInit,0,0);
}
void *beNDMWShopCtrl30_getMetaCall(){return beNDMWShopCtrl30_getMeta();}
void beNDMWShopCtrl30_fieldInit(){
 void *meta=lbl_80535EA0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1D44,0x1);
 fn_800659C0(meta,lbl_804E1D48,lbl_804E1D4C,lbl_804E1D50,field);
}
void *fn_8032F5D4(void *object){
 fn_8032F910();
 return fn_8006546C(lbl_80535EA8,object);
}
void *beNDMWShopCtrlEvolve_getMeta(){
 if(!lbl_80535EA8 || !(reinterpret_cast<unsigned int *>(lbl_80535EA8)[0x24/4]&4)) fn_8032F910();
 return lbl_80535EA8;
}
}
#pragma pop
