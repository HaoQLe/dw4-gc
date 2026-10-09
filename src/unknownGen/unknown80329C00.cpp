#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWShopSelect01_getMeta();
void beNDMWShopSelect01_vtableRead();
void beNDMWWindowSelect_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void fn_80329E74();
extern char lbl_804535C4[];
extern char lbl_80535D84[];
extern void *lbl_80535D88;
void beNDMWShopSelect01_register();
void *beNDMWShopSelect01_getMetaCall();
}
extern "C" {
void fn_80329C00(){
 fn_80066188((int)beNDMWShopSelect01_register);
}
void beNDMWShopSelect01_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D84,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWShopSelect01_getMetaCall,(int)lbl_804535C4,112,(int)beNDMWShopSelect01_vtableRead,0,0,0);
}
void *beNDMWShopSelect01_getMetaCall(){return beNDMWShopSelect01_getMeta();}
void *fn_80329CB4(void *object){
 fn_80329E74();
 return fn_8006546C(lbl_80535D88,object);
}
void *beNDMWShopSelect00_getMeta(){
 if(!lbl_80535D88 || !(reinterpret_cast<unsigned int *>(lbl_80535D88)[0x24/4]&4)) fn_80329E74();
 return lbl_80535D88;
}
}
#pragma pop
