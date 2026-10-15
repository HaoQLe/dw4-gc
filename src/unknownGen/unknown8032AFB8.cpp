#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWStatusInfoWork_registerNow();
extern void *beNDMWStatusInfoWork_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWStatusInfoWork_create(void *object){
 beNDMWStatusInfoWork_registerNow();
 return meta_createInstance(beNDMWStatusInfoWork_meta,object);
}
void *beNDMWStatusInfoWork_metaObject(){
 if(!beNDMWStatusInfoWork_meta) beNDMWStatusInfoWork_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWStatusInfoWork_meta;
}
void *beNDMWStatusInfoWork_getMeta(){
 if(!beNDMWStatusInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusInfoWork_meta)[0x24/4]&4)) beNDMWStatusInfoWork_registerNow();
 return beNDMWStatusInfoWork_meta;
}
}
#pragma pop
