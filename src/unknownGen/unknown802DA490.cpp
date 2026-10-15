#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beFileListInfoManager_arkRegister();
extern void *beFileListInfoManager_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beFileListInfoManager_create(void *object){
 beFileListInfoManager_arkRegister();
 return meta_createInstance(beFileListInfoManager_meta,object);
}
void *beFileListInfoManager_metaObject(){
 if(!beFileListInfoManager_meta) beFileListInfoManager_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beFileListInfoManager_meta;
}
void *beFileListInfoManager_getMeta(){
 if(!beFileListInfoManager_meta || !(reinterpret_cast<unsigned int *>(beFileListInfoManager_meta)[0x24/4]&4)) beFileListInfoManager_arkRegister();
 return beFileListInfoManager_meta;
}
}
#pragma pop
