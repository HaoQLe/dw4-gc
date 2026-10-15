#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWMdlItemInfoWork_arkRegister();
extern void *beNDMWMdlItemInfoWork_meta;
}
extern "C" {
void *beNDMWMdlItemInfoWork_create(void *object){
 beNDMWMdlItemInfoWork_arkRegister();
 return meta_createInstance(beNDMWMdlItemInfoWork_meta,object);
}
void *beNDMWMdlItemInfoWork_getMeta(){
 if(!beNDMWMdlItemInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlItemInfoWork_meta)[0x24/4]&4)) beNDMWMdlItemInfoWork_arkRegister();
 return beNDMWMdlItemInfoWork_meta;
}
}
#pragma pop
