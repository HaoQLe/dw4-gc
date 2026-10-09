#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect03_getMeta();
void beNDMWShopSelect03_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_8032990C();
extern char lbl_8045358C[];
extern char lbl_80535D78[];
extern void *lbl_80535D7C;
void beNDMWShopSelect03_register();
void *beNDMWShopSelect03_getMetaCall();
}
extern "C" {
void fn_80329698(){
 fn_80066188((int)beNDMWShopSelect03_register);
}
void beNDMWShopSelect03_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D78,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect03_getMetaCall,(int)lbl_8045358C,112,(int)beNDMWShopSelect03_vtableRead,0,0,0);
}
void *beNDMWShopSelect03_getMetaCall(){return beNDMWShopSelect03_getMeta();}
void *fn_8032974C(void *object){
 fn_8032990C();
 return fn_8006546C(lbl_80535D7C,object);
}
void *beNDMWShopSelect02_getMeta(){
 if(!lbl_80535D7C || !(reinterpret_cast<unsigned int *>(lbl_80535D7C)[0x24/4]&4)) fn_8032990C();
 return lbl_80535D7C;
}
}
#pragma pop
