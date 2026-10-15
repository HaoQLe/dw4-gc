#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWMdlPlayer2_registerNow();
extern void *beNDMWMdlPlayer2_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWMdlPlayer2_create(void *object){
 beNDMWMdlPlayer2_registerNow();
 return meta_createInstance(beNDMWMdlPlayer2_meta,object);
}
void *beNDMWMdlPlayer2_metaObject(){
 if(!beNDMWMdlPlayer2_meta) beNDMWMdlPlayer2_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlPlayer2_meta;
}
void *beNDMWMdlPlayer2_getMeta(){
 if(!beNDMWMdlPlayer2_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlPlayer2_meta)[0x24/4]&4)) beNDMWMdlPlayer2_registerNow();
 return beNDMWMdlPlayer2_meta;
}
}
#pragma pop
