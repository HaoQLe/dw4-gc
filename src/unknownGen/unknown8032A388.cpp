#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelectE0_getMeta();
void beNDMWStatusSelectE0_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWStatusSelect01_arkRegister();
extern char beNDMWStatusSelectE0_className[];
extern char beNDMWStatusSelectE0_meta[];
extern void *beNDMWStatusSelect01_meta;
void beNDMWStatusSelectE0_register();
void *beNDMWStatusSelectE0_getMetaCall();
}
extern "C" {
void beNDMWStatusSelectE0_arkRegister(){
 meta_registerNow((int)beNDMWStatusSelectE0_register);
}
void beNDMWStatusSelectE0_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusSelectE0_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelectE0_getMetaCall,(int)beNDMWStatusSelectE0_className,112,(int)beNDMWStatusSelectE0_vtableRead,0,0,0);
}
void *beNDMWStatusSelectE0_getMetaCall(){return beNDMWStatusSelectE0_getMeta();}
void *beNDMWStatusSelect01_create(void *object){
 beNDMWStatusSelect01_arkRegister();
 return meta_createInstance(beNDMWStatusSelect01_meta,object);
}
void *beNDMWStatusSelect01_getMeta(){
 if(!beNDMWStatusSelect01_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSelect01_meta)[0x24/4]&4)) beNDMWStatusSelect01_arkRegister();
 return beNDMWStatusSelect01_meta;
}
}
#pragma pop
