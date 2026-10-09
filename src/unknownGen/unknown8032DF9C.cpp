#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlA2_getMeta();
void beNDMWShopCtrlA2_vtableRead();
void beNDMWWindowCtrl_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void fn_8032E3A4();
extern char lbl_80453924[];
extern char lbl_80535E64[];
extern void *lbl_80535E68;
void beNDMWShopCtrlA2_register();
void *beNDMWShopCtrlA2_getMetaCall();
}
extern "C" {
void fn_8032DF9C(){
 fn_80066188((int)beNDMWShopCtrlA2_register);
}
void beNDMWShopCtrlA2_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E64,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlA2_getMetaCall,(int)lbl_80453924,84,(int)beNDMWShopCtrlA2_vtableRead,0,0,0);
}
void *beNDMWShopCtrlA2_getMetaCall(){return beNDMWShopCtrlA2_getMeta();}
void *fn_8032E050(void *object){
 fn_8032E3A4();
 return fn_8006546C(lbl_80535E68,object);
}
void *beNDMWShopCtrlA1_getMeta(){
 if(!lbl_80535E68 || !(reinterpret_cast<unsigned int *>(lbl_80535E68)[0x24/4]&4)) fn_8032E3A4();
 return lbl_80535E68;
}
}
#pragma pop
