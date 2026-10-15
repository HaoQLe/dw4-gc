#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrl_register();
void *beNDMWMdlPBullet_getMeta();
void beNDMWMdlPBullet_vtableRead();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803386E8();
void beNDMWMdlObject_registerNow();
extern char beNDMWMdlPBullet_className[];
extern char beNDMWMdlPBullet_meta[];
extern void *beNDMWMdlObject_meta;
extern void *lbl_805621F4;
void beNDMWMdlPBullet_register();
void *beNDMWMdlPBullet_getMetaCall();
}
extern "C" {
void beNDMWMdlPBullet_registerNow(){
 meta_registerNow((int)beNDMWMdlPBullet_register);
}
void beNDMWMdlPBullet_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlPBullet_meta,(int)beModelCtrl_register,(int)fn_803386E8,(int)beNDMWMdlPBullet_getMetaCall,(int)beNDMWMdlPBullet_className,44,(int)beNDMWMdlPBullet_vtableRead,0,0,0);
}
void *beNDMWMdlPBullet_getMetaCall(){return beNDMWMdlPBullet_getMeta();}
void *beNDMWMdlObject_create(void *object){
 beNDMWMdlObject_registerNow();
 return meta_createInstance(beNDMWMdlObject_meta,object);
}
void *beNDMWMdlObject_metaObject(){
 if(!beNDMWMdlObject_meta) beNDMWMdlObject_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlObject_meta;
}
void *beNDMWMdlObject_getMeta(){
 if(!beNDMWMdlObject_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlObject_meta)[0x24/4]&4)) beNDMWMdlObject_registerNow();
 return beNDMWMdlObject_meta;
}
}
#pragma pop
