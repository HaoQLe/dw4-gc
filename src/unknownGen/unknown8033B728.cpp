#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlEBullet_getMeta();
void beNDMWMdlEBullet_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWLogoInfo_arkRegister();
extern char beNDMWMdlEBullet_className[];
extern char beNDMWMdlEBullet_meta[];
extern void *beNDMWLogoInfo_meta;
void beNDMWMdlEBullet_register();
void *beNDMWMdlEBullet_getMetaCall();
}
extern "C" {
void beNDMWMdlEBullet_arkRegister(){
 meta_registerNow((int)beNDMWMdlEBullet_register);
}
void beNDMWMdlEBullet_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlEBullet_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlEBullet_getMetaCall,(int)beNDMWMdlEBullet_className,44,(int)beNDMWMdlEBullet_vtableRead,0,0,0);
}
void *beNDMWMdlEBullet_getMetaCall(){return beNDMWMdlEBullet_getMeta();}
}
#pragma pop
