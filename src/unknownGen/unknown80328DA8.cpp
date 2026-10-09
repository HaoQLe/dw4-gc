#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelectA0_getMeta();
void beNDMWShopSelectA0_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_80328FE4();
extern char lbl_8045353C[];
extern char lbl_80535D68[];
extern void *lbl_80535D6C;
void beNDMWShopSelectA0_register();
void *beNDMWShopSelectA0_getMetaCall();
}
extern "C" {
void fn_80328DA8(){
 fn_80066188((int)beNDMWShopSelectA0_register);
}
void beNDMWShopSelectA0_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D68,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelectA0_getMetaCall,(int)lbl_8045353C,112,(int)beNDMWShopSelectA0_vtableRead,0,0,0);
}
void *beNDMWShopSelectA0_getMetaCall(){return beNDMWShopSelectA0_getMeta();}
void *fn_80328E5C(void *object){
 fn_80328FE4();
 return fn_8006546C(lbl_80535D6C,object);
}
void *beNDMWShopSelect52_getMeta(){
 if(!lbl_80535D6C || !(reinterpret_cast<unsigned int *>(lbl_80535D6C)[0x24/4]&4)) fn_80328FE4();
 return lbl_80535D6C;
}
}
#pragma pop
