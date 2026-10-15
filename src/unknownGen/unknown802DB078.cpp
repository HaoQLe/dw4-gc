#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beDemoManager_arkRegister();
extern void *beDemoManager_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beDemoManager_create(void *object){
 beDemoManager_arkRegister();
 return meta_createInstance(beDemoManager_meta,object);
}
void *beDemoManager_metaObject(){
 if(!beDemoManager_meta) beDemoManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beDemoManager_meta;
}
void *beDemoManager_getMeta(){
 if(!beDemoManager_meta || !(reinterpret_cast<unsigned int *>(beDemoManager_meta)[0x24/4]&4)) beDemoManager_arkRegister();
 return beDemoManager_meta;
}
}
#pragma pop
