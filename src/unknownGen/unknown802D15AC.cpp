#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beLuaState_registerNow();
extern void *beLuaState_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beLuaState_create(void *object){
 beLuaState_registerNow();
 return meta_createInstance(beLuaState_meta,object);
}
void *beLuaState_metaObject(){
 if(!beLuaState_meta) beLuaState_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beLuaState_meta;
}
void *beLuaState_getMeta(){
 if(!beLuaState_meta || !(reinterpret_cast<unsigned int *>(beLuaState_meta)[0x24/4]&4)) beLuaState_registerNow();
 return beLuaState_meta;
}
}
#pragma pop
