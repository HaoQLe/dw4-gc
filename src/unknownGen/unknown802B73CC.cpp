#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beSystem_arkRegister();
extern void *beSystem_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSystem_create(void *object){
 beSystem_arkRegister();
 return meta_createInstance(beSystem_meta,object);
}
void *beSystem_metaObject(){
 if(!beSystem_meta) beSystem_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSystem_meta;
}
void *beSystem_getMeta(){
 if(!beSystem_meta || !(reinterpret_cast<unsigned int *>(beSystem_meta)[0x24/4]&4)) beSystem_arkRegister();
 return beSystem_meta;
}
}
#pragma pop
