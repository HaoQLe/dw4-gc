#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beLua_registerNow();
extern void *beLua_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beLua_create(void *object){
 beLua_registerNow();
 return meta_createInstance(beLua_meta,object);
}
void *beLua_metaObject(){
 if(!beLua_meta) beLua_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLua_meta;
}
void *beLua_getMeta(){
 if(!beLua_meta || !(reinterpret_cast<unsigned int *>(beLua_meta)[0x24/4]&4)) beLua_registerNow();
 return beLua_meta;
}
}
#pragma pop
