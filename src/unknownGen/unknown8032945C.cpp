#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect11_getMeta();
void beNDMWShopSelect11_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_80329698();
extern char lbl_80453578[];
extern char lbl_80535D74[];
extern void *lbl_80535D78;
void beNDMWShopSelect11_register();
void *beNDMWShopSelect11_getMetaCall();
}
extern "C" {
void fn_8032945C(){
 fn_80066188((int)beNDMWShopSelect11_register);
}
void beNDMWShopSelect11_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D74,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect11_getMetaCall,(int)lbl_80453578,112,(int)beNDMWShopSelect11_vtableRead,0,0,0);
}
void *beNDMWShopSelect11_getMetaCall(){return beNDMWShopSelect11_getMeta();}
void *fn_80329510(void *object){
 fn_80329698();
 return fn_8006546C(lbl_80535D78,object);
}
void *beNDMWShopSelect03_getMeta(){
 if(!lbl_80535D78 || !(reinterpret_cast<unsigned int *>(lbl_80535D78)[0x24/4]&4)) fn_80329698();
 return lbl_80535D78;
}
}
#pragma pop
