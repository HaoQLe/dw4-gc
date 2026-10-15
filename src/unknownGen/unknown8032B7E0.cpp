#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWShopJunk_fieldInit();
void *beNDMWShopJunk_getMeta();
void beNDMWShopJunk_vtableRead();
void beNDMWWindowCtrl_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032B8A4();
extern char beNDMWShopJunk_className[];
extern char lbl_804E1AEC[];
extern char beNDMWShopJunk_meta[];
void beNDMWShopJunk_register();
void *beNDMWShopJunk_getMetaCall();
}
extern "C" {
void beNDMWShopJunk_registerNow(){
 meta_registerNow((int)beNDMWShopJunk_register);
}
void beNDMWShopJunk_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWShopJunk_meta,(int)beNDMWWindowCtrl_register,(int)fn_8032B8A4,(int)beNDMWShopJunk_getMetaCall,(int)beNDMWShopJunk_className,96,(int)beNDMWShopJunk_vtableRead,(int)beNDMWShopJunk_fieldInit,0,(int)lbl_804E1AEC);
}
void *beNDMWShopJunk_getMetaCall(){return beNDMWShopJunk_getMeta();}
}
#pragma pop
