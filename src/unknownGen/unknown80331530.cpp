#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_createInstance(void *,void *);
void beNDMWStatusCtrlDisk_arkRegister();
extern void *beNDMWStatusCtrlDisk_meta;
}
extern "C" {
void *beNDMWStatusCtrlDisk_create(void *object){
 beNDMWStatusCtrlDisk_arkRegister();
 return meta_createInstance(beNDMWStatusCtrlDisk_meta,object);
}
void *beNDMWStatusCtrlDisk_getMeta(){
 if(!beNDMWStatusCtrlDisk_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusCtrlDisk_meta)[0x24/4]&4)) beNDMWStatusCtrlDisk_arkRegister();
 return beNDMWStatusCtrlDisk_meta;
}
}
#pragma pop
