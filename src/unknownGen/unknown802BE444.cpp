#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beSvReadMediaApi_registerNow();
extern void *beSvReadMediaApi_meta;
}
extern "C" {
void *beSvReadMediaApi_create(void *object){
 beSvReadMediaApi_registerNow();
 return meta_createInstance(beSvReadMediaApi_meta,object);
}
void *beSvReadMediaApi_getMeta(){
 if(!beSvReadMediaApi_meta || !(reinterpret_cast<unsigned int *>(beSvReadMediaApi_meta)[0x24/4]&4)) beSvReadMediaApi_registerNow();
 return beSvReadMediaApi_meta;
}
}
#pragma pop
