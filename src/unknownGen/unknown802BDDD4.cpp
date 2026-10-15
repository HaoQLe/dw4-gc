#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beSvGetFreeSizeApi_registerNow();
extern void *beSvGetFreeSizeApi_meta;
}
extern "C" {
void *beSvGetFreeSizeApi_create(void *object){
 beSvGetFreeSizeApi_registerNow();
 return meta_createInstance(beSvGetFreeSizeApi_meta,object);
}
void *beSvGetFreeSizeApi_getMeta(){
 if(!beSvGetFreeSizeApi_meta || !(reinterpret_cast<unsigned int *>(beSvGetFreeSizeApi_meta)[0x24/4]&4)) beSvGetFreeSizeApi_registerNow();
 return beSvGetFreeSizeApi_meta;
}
}
#pragma pop
