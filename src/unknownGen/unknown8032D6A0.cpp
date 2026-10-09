#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlEditBit_getMeta();
void beNDMWShopCtrlEditBit_vtableRead();
void beNDMWWindowCtrl_register();
void *fn_8006546C(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void fn_8032DB64();
extern char lbl_80453880[];
extern char lbl_804E1BF0[];
extern char lbl_804E1BF8[];
extern char lbl_804E1C00[];
extern char lbl_804E1C08[];
extern void *lbl_80535E38;
extern void *lbl_80535E44;
void beNDMWShopCtrlEditBit_register();
void *beNDMWShopCtrlEditBit_getMetaCall();
void beNDMWShopCtrlEditBit_fieldInit();
}
extern "C" {
void fn_8032D6A0(){
 fn_80066188((int)beNDMWShopCtrlEditBit_register);
}
void beNDMWShopCtrlEditBit_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80535E38,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlEditBit_getMetaCall,(int)lbl_80453880,92,(int)beNDMWShopCtrlEditBit_vtableRead,(int)beNDMWShopCtrlEditBit_fieldInit,0,0);
}
void *beNDMWShopCtrlEditBit_getMetaCall(){return beNDMWShopCtrlEditBit_getMeta();}
void beNDMWShopCtrlEditBit_fieldInit(){
 void *meta=lbl_80535E38;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E1BF0,0x2);
 fn_800659C0(meta,lbl_804E1BF8,lbl_804E1C00,lbl_804E1C08,field);
}
void *fn_8032D7DC(void *object){
 fn_8032DB64();
 return fn_8006546C(lbl_80535E44,object);
}
void *beNDMWShopCtrlDigilabo_getMeta(){
 if(!lbl_80535E44 || !(reinterpret_cast<unsigned int *>(lbl_80535E44)[0x24/4]&4)) fn_8032DB64();
 return lbl_80535E44;
}
}
#pragma pop
