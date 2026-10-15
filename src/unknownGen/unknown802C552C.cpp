#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beModelCtrlSCSound_arkRegister();
extern void *beModelCtrlSCSound_meta;
}
extern "C" {
void *beModelCtrlSCSound_create(void *object){
 beModelCtrlSCSound_arkRegister();
 return meta_createInstance(beModelCtrlSCSound_meta,object);
}
void *beModelCtrlSCSound_getMeta(){
 if(!beModelCtrlSCSound_meta || !(reinterpret_cast<unsigned int *>(beModelCtrlSCSound_meta)[0x24/4]&4)) beModelCtrlSCSound_arkRegister();
 return beModelCtrlSCSound_meta;
}
}
#pragma pop
