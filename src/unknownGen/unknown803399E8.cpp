#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWMdlPBullet_arkRegister();
extern void *beNDMWMdlPBullet_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWMdlPBullet_create(void *object){
 beNDMWMdlPBullet_arkRegister();
 return meta_createInstance(beNDMWMdlPBullet_meta,object);
}
void *beNDMWMdlPBullet_metaObject(){
 if(!beNDMWMdlPBullet_meta) beNDMWMdlPBullet_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlPBullet_meta;
}
void *beNDMWMdlPBullet_getMeta(){
 if(!beNDMWMdlPBullet_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPBullet_meta)[0x24/4]&4)) beNDMWMdlPBullet_arkRegister();
 return beNDMWMdlPBullet_meta;
}
}
#pragma pop
