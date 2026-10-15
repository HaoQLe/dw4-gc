#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beSvEndApi_arkRegister();
extern void *beSvEndApi_meta;
}
extern "C" {
void *beSvEndApi_create(void *object){
 beSvEndApi_arkRegister();
 return meta_createInstance(beSvEndApi_meta,object);
}
void *beSvEndApi_getMeta(){
 if(!beSvEndApi_meta || !(reinterpret_cast<unsigned int *>(beSvEndApi_meta)[0x24/4]&4)) beSvEndApi_arkRegister();
 return beSvEndApi_meta;
}
}
#pragma pop
