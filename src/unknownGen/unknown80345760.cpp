#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beNDMWAfsSetup_registerNow();
extern void *beNDMWAfsSetup_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beNDMWAfsSetup_create(void *object){
 beNDMWAfsSetup_registerNow();
 return meta_createInstance(beNDMWAfsSetup_meta,object);
}
void *beNDMWAfsSetup_metaObject(){
 if(!beNDMWAfsSetup_meta) beNDMWAfsSetup_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWAfsSetup_meta;
}
void *beNDMWAfsSetup_getMeta(){
 if(!beNDMWAfsSetup_meta || !(reinterpret_cast<unsigned int *>(beNDMWAfsSetup_meta)[0x24/4]&4)) beNDMWAfsSetup_registerNow();
 return beNDMWAfsSetup_meta;
}
}
#pragma pop
