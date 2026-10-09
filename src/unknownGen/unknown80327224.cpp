#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopTitle01_getMeta();
void beNDMWShopTitle01_vtableRead();
void beNDMWWindowTitle_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void fn_80327564();
extern char lbl_80453488[];
extern char lbl_80535D44[];
extern void *lbl_80535D48;
void beNDMWShopTitle01_register();
void *beNDMWShopTitle01_getMetaCall();
}
extern "C" {
void fn_80327224(){
 fn_80066188((int)beNDMWShopTitle01_register);
}
void beNDMWShopTitle01_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D44,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWShopTitle01_getMetaCall,(int)lbl_80453488,80,(int)beNDMWShopTitle01_vtableRead,0,0,0);
}
void *beNDMWShopTitle01_getMetaCall(){return beNDMWShopTitle01_getMeta();}
void *fn_803272D8(void *object){
 fn_80327564();
 return fn_8006546C(lbl_80535D48,object);
}
void *beNDMWShopTitle00_getMeta(){
 if(!lbl_80535D48 || !(reinterpret_cast<unsigned int *>(lbl_80535D48)[0x24/4]&4)) fn_80327564();
 return lbl_80535D48;
}
}
#pragma pop
