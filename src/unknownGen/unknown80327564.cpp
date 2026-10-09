#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopTitle00_getMeta();
void beNDMWShopTitle00_vtableRead();
void beNDMWWindowTitle_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void fn_803278A4();
extern char lbl_8045349C[];
extern char lbl_80535D48[];
extern void *lbl_80535D4C;
void beNDMWShopTitle00_register();
void *beNDMWShopTitle00_getMetaCall();
}
extern "C" {
void fn_80327564(){
 fn_80066188((int)beNDMWShopTitle00_register);
}
void beNDMWShopTitle00_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D48,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWShopTitle00_getMetaCall,(int)lbl_8045349C,80,(int)beNDMWShopTitle00_vtableRead,0,0,0);
}
void *beNDMWShopTitle00_getMetaCall(){return beNDMWShopTitle00_getMeta();}
void *fn_80327618(void *object){
 fn_803278A4();
 return fn_8006546C(lbl_80535D4C,object);
}
void *beNDMWStatusTitle04_getMeta(){
 if(!lbl_80535D4C || !(reinterpret_cast<unsigned int *>(lbl_80535D4C)[0x24/4]&4)) fn_803278A4();
 return lbl_80535D4C;
}
}
#pragma pop
