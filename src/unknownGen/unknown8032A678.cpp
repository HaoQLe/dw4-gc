#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelect01_getMeta();
void beNDMWStatusSelect01_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWStatusSelect00_arkRegister();
extern char beNDMWStatusSelect01_className[];
extern char beNDMWStatusSelect01_meta[];
extern void *beNDMWStatusSelect00_meta;
void beNDMWStatusSelect01_register();
void *beNDMWStatusSelect01_getMetaCall();
}
extern "C" {
void *beNDMWStatusSelect00_create(void *object){
 beNDMWStatusSelect00_arkRegister();
 return meta_createInstance(beNDMWStatusSelect00_meta,object);
}
void *beNDMWStatusSelect00_getMeta(){
 if(!beNDMWStatusSelect00_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSelect00_meta)[0x24/4]&4)) beNDMWStatusSelect00_arkRegister();
 return beNDMWStatusSelect00_meta;
}
}
#pragma pop
