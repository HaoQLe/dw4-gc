#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlEffect_getMeta();
void beNDMWMdlEffect_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWMdlEBullet_registerNow();
extern char beNDMWMdlEffect_className[];
extern char beNDMWMdlEffect_meta[];
extern void *beNDMWMdlEBullet_meta;
extern void *lbl_805621F4;
void beNDMWMdlEffect_register();
void *beNDMWMdlEffect_getMetaCall();
}
extern "C" {
void beNDMWMdlEffect_registerNow(){
 meta_registerNow((int)beNDMWMdlEffect_register);
}
void beNDMWMdlEffect_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlEffect_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlEffect_getMetaCall,(int)beNDMWMdlEffect_className,44,(int)beNDMWMdlEffect_vtableRead,0,0,0);
}
void *beNDMWMdlEffect_getMetaCall(){return beNDMWMdlEffect_getMeta();}
void *beNDMWMdlEBullet_create(void *object){
 beNDMWMdlEBullet_registerNow();
 return meta_createInstance(beNDMWMdlEBullet_meta,object);
}
void *beNDMWMdlEBullet_metaObject(){
 if(!beNDMWMdlEBullet_meta) beNDMWMdlEBullet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlEBullet_meta;
}
void *beNDMWMdlEBullet_getMeta(){
 if(!beNDMWMdlEBullet_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlEBullet_meta)[0x24/4]&4)) beNDMWMdlEBullet_registerNow();
 return beNDMWMdlEBullet_meta;
}
}
#pragma pop
