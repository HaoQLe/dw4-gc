#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWMdlEnemy_registerNow();
extern void *beNDMWMdlEnemy_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWMdlEnemy_create(void *object){
 beNDMWMdlEnemy_registerNow();
 return meta_createInstance(beNDMWMdlEnemy_meta,object);
}
void *beNDMWMdlEnemy_metaObject(){
 if(!beNDMWMdlEnemy_meta) beNDMWMdlEnemy_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlEnemy_meta;
}
void *beNDMWMdlEnemy_getMeta(){
 if(!beNDMWMdlEnemy_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlEnemy_meta)[0x24/4]&4)) beNDMWMdlEnemy_registerNow();
 return beNDMWMdlEnemy_meta;
}
}
#pragma pop
