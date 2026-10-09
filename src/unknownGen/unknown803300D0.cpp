#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrl00_getMeta();
void beNDMWShopCtrl00_vtableRead();
void beNDMWWindowCtrl_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void fn_80330580();
extern char lbl_80453A40[];
extern char lbl_80535EBC[];
extern void *lbl_80535EC0;
void beNDMWShopCtrl00_register();
void *beNDMWShopCtrl00_getMetaCall();
}
extern "C" {
void fn_803300D0(){
 fn_80066188((int)beNDMWShopCtrl00_register);
}
void beNDMWShopCtrl00_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535EBC,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrl00_getMetaCall,(int)lbl_80453A40,84,(int)beNDMWShopCtrl00_vtableRead,0,0,0);
}
void *beNDMWShopCtrl00_getMetaCall(){return beNDMWShopCtrl00_getMeta();}
void *fn_80330184(void *object){
 fn_80330580();
 return fn_8006546C(lbl_80535EC0,object);
}
void *beNDMWStatusSubMenu_getMeta(){
 if(!lbl_80535EC0 || !(reinterpret_cast<unsigned int *>(lbl_80535EC0)[0x24/4]&4)) fn_80330580();
 return lbl_80535EC0;
}
}
#pragma pop
