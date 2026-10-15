#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beSvReadMediaApi_arkRegister();
extern void *beSvReadMediaApi_meta;
}
extern "C" {
void *beSvReadMediaApi_create(void *object){
 beSvReadMediaApi_arkRegister();
 return meta_createInstance(beSvReadMediaApi_meta,object);
}
void *beSvReadMediaApi_getMeta(){
 if(!beSvReadMediaApi_meta || !(reinterpret_cast<unsigned int *>(beSvReadMediaApi_meta)[0x24/4]&4)) beSvReadMediaApi_arkRegister();
 return beSvReadMediaApi_meta;
}
}
#pragma pop
