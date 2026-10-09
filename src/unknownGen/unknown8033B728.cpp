#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlEBullet_getMeta();
void beNDMWMdlEBullet_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void fn_8033B978();
extern char lbl_8045477C[];
extern char lbl_80536234[];
extern void *lbl_80536238;
void beNDMWMdlEBullet_register();
void *beNDMWMdlEBullet_getMetaCall();
}
extern "C" {
void fn_8033B728(){
 fn_80066188((int)beNDMWMdlEBullet_register);
}
void beNDMWMdlEBullet_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536234,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlEBullet_getMetaCall,(int)lbl_8045477C,44,(int)beNDMWMdlEBullet_vtableRead,0,0,0);
}
void *beNDMWMdlEBullet_getMetaCall(){return beNDMWMdlEBullet_getMeta();}
void *beNDMWLogoInfo_getMeta(){
 if(!lbl_80536238 || !(reinterpret_cast<unsigned int *>(lbl_80536238)[0x24/4]&4)) fn_8033B978();
 return lbl_80536238;
}
}
#pragma pop
