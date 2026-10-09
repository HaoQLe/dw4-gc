#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopCtrlSell_getMeta();
void beNDMWShopCtrlSell_vtableRead();
void beNDMWWindowCtrl_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
void fn_8032D6A0();
extern char lbl_8045386C[];
extern char lbl_80535E34[];
extern void *lbl_80535E38;
void beNDMWShopCtrlSell_register();
void *beNDMWShopCtrlSell_getMetaCall();
}
extern "C" {
void fn_8032D360(){
 fn_80066188((int)beNDMWShopCtrlSell_register);
}
void beNDMWShopCtrlSell_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535E34,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopCtrlSell_getMetaCall,(int)lbl_8045386C,84,(int)beNDMWShopCtrlSell_vtableRead,0,0,0);
}
void *beNDMWShopCtrlSell_getMetaCall(){return beNDMWShopCtrlSell_getMeta();}
void *fn_8032D414(void *object){
 fn_8032D6A0();
 return fn_8006546C(lbl_80535E38,object);
}
void *beNDMWShopCtrlEditBit_getMeta(){
 if(!lbl_80535E38 || !(reinterpret_cast<unsigned int *>(lbl_80535E38)[0x24/4]&4)) fn_8032D6A0();
 return lbl_80535E38;
}
}
#pragma pop
