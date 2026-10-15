#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beSvStartApi_arkRegister();
extern void *beSvStartApi_meta;
}
extern "C" {
void *beSvStartApi_create(void *object){
 beSvStartApi_arkRegister();
 return meta_createInstance(beSvStartApi_meta,object);
}
void *beSvStartApi_getMeta(){
 if(!beSvStartApi_meta || !(reinterpret_cast<unsigned int *>(beSvStartApi_meta)[0x24/4]&4)) beSvStartApi_arkRegister();
 return beSvStartApi_meta;
}
}
#pragma pop
