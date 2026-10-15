#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void igPickMode_arkRegister();
extern void *igPickMode_meta;
}
extern "C" {
void *igPickMode_create(void *object){
 igPickMode_arkRegister();
 return meta_createInstance(igPickMode_meta,object);
}
void *igPickMode_getMeta(){
 if(!igPickMode_meta || !(reinterpret_cast<unsigned int *>(igPickMode_meta)[0x24/4]&4)) igPickMode_arkRegister();
 return igPickMode_meta;
}
}
#pragma pop
