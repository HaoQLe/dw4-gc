#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect52_getMeta();
void beNDMWShopSelect52_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_80329220();
extern char lbl_80453550[];
extern char lbl_80535D6C[];
extern void *lbl_80535D70;
void beNDMWShopSelect52_register();
void *beNDMWShopSelect52_getMetaCall();
}
extern "C" {
void fn_80328FE4(){
 fn_80066188((int)beNDMWShopSelect52_register);
}
void beNDMWShopSelect52_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D6C,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect52_getMetaCall,(int)lbl_80453550,112,(int)beNDMWShopSelect52_vtableRead,0,0,0);
}
void *beNDMWShopSelect52_getMetaCall(){return beNDMWShopSelect52_getMeta();}
void *fn_80329098(void *object){
 fn_80329220();
 return fn_8006546C(lbl_80535D70,object);
}
void *beNDMWShopSelect34_getMeta(){
 if(!lbl_80535D70 || !(reinterpret_cast<unsigned int *>(lbl_80535D70)[0x24/4]&4)) fn_80329220();
 return lbl_80535D70;
}
}
#pragma pop
