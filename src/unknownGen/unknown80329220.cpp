#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect34_getMeta();
void beNDMWShopSelect34_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_8032945C();
extern char lbl_80453564[];
extern char lbl_80535D70[];
extern void *lbl_80535D74;
void beNDMWShopSelect34_register();
void *beNDMWShopSelect34_getMetaCall();
}
extern "C" {
void fn_80329220(){
 fn_80066188((int)beNDMWShopSelect34_register);
}
void beNDMWShopSelect34_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D70,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect34_getMetaCall,(int)lbl_80453564,112,(int)beNDMWShopSelect34_vtableRead,0,0,0);
}
void *beNDMWShopSelect34_getMetaCall(){return beNDMWShopSelect34_getMeta();}
void *fn_803292D4(void *object){
 fn_8032945C();
 return fn_8006546C(lbl_80535D74,object);
}
void *beNDMWShopSelect11_getMeta(){
 if(!lbl_80535D74 || !(reinterpret_cast<unsigned int *>(lbl_80535D74)[0x24/4]&4)) fn_8032945C();
 return lbl_80535D74;
}
}
#pragma pop
