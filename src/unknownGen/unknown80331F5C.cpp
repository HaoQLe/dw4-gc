#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlFolder_arkRegister();
extern void *beNDMWStatusCtrlFolder_meta;
}
extern "C" {
void *beNDMWStatusCtrlFolder_create(void *object){
 beNDMWStatusCtrlFolder_arkRegister();
 return meta_createInstance(beNDMWStatusCtrlFolder_meta,object);
}
void *beNDMWStatusCtrlFolder_getMeta(){
 if(!beNDMWStatusCtrlFolder_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlFolder_meta)[0x24/4]&4)) beNDMWStatusCtrlFolder_arkRegister();
 return beNDMWStatusCtrlFolder_meta;
}
}
#pragma pop
