#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusSelectE1_getMeta();
void beNDMWStatusSelectE1_vtableRead();
void beNDMWWindowSelect_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80328C10();
void beNDMWStatusSelectE0_arkRegister();
extern char beNDMWStatusSelectE1_className[];
extern char beNDMWStatusSelectE1_meta[];
extern void *beNDMWStatusSelectE0_meta;
void beNDMWStatusSelectE1_register();
void *beNDMWStatusSelectE1_getMetaCall();
}
extern "C" {
void beNDMWStatusSelectE1_arkRegister(){
 meta_registerNow((int)beNDMWStatusSelectE1_register);
}
void beNDMWStatusSelectE1_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusSelectE1_meta,(int)beNDMWWindowSelect_register,(int)fn_80328C10,(int)beNDMWStatusSelectE1_getMetaCall,(int)beNDMWStatusSelectE1_className,112,(int)beNDMWStatusSelectE1_vtableRead,0,0,0);
}
void *beNDMWStatusSelectE1_getMetaCall(){return beNDMWStatusSelectE1_getMeta();}
void *beNDMWStatusSelectE0_create(void *object){
 beNDMWStatusSelectE0_arkRegister();
 return meta_createInstance(beNDMWStatusSelectE0_meta,object);
}
void *beNDMWStatusSelectE0_getMeta(){
 if(!beNDMWStatusSelectE0_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusSelectE0_meta)[0x24/4]&4)) beNDMWStatusSelectE0_arkRegister();
 return beNDMWStatusSelectE0_meta;
}
}
#pragma pop
