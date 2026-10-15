#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void beSvConnectCheck_registerNow();
extern void *beSvConnectCheck_meta;
extern void *lbl_805621F4;
}
extern "C" {
void *beSvConnectCheck_create(void *object){
 beSvConnectCheck_registerNow();
 return meta_createInstance(beSvConnectCheck_meta,object);
}
void *beSvConnectCheck_metaObject(){
 if(!beSvConnectCheck_meta) beSvConnectCheck_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beSvConnectCheck_meta;
}
void *beSvConnectCheck_getMeta(){
 if(!beSvConnectCheck_meta || !(reinterpret_cast<unsigned int *>(beSvConnectCheck_meta)[0x24/4]&4)) beSvConnectCheck_registerNow();
 return beSvConnectCheck_meta;
}
}
#pragma pop
