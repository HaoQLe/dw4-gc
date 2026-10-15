#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beSvUseCheckApi_arkRegister();
extern void *beSvUseCheckApi_meta;
}
extern "C" {
void *beSvUseCheckApi_create(void *object){
 beSvUseCheckApi_arkRegister();
 return meta_createInstance(beSvUseCheckApi_meta,object);
}
void *beSvUseCheckApi_getMeta(){
 if(!beSvUseCheckApi_meta || !(reinterpret_cast<unsigned int *>(beSvUseCheckApi_meta)[0x24/4]&4)) beSvUseCheckApi_arkRegister();
 return beSvUseCheckApi_meta;
}
}
#pragma pop
