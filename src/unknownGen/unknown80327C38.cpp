#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle03_getMeta();
void beNDMWStatusTitle03_vtableRead();
void beNDMWWindowTitle_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void beNDMWStatusTitle02_arkRegister();
extern char beNDMWStatusTitle03_className[];
extern char beNDMWStatusTitle03_meta[];
extern void *beNDMWStatusTitle02_meta;
void beNDMWStatusTitle03_register();
void *beNDMWStatusTitle03_getMetaCall();
}
extern "C" {
void beNDMWStatusTitle03_arkRegister(){
 meta_registerNow((int)beNDMWStatusTitle03_register);
}
void beNDMWStatusTitle03_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusTitle03_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle03_getMetaCall,(int)beNDMWStatusTitle03_className,80,(int)beNDMWStatusTitle03_vtableRead,0,0,0);
}
void *beNDMWStatusTitle03_getMetaCall(){return beNDMWStatusTitle03_getMeta();}
void *beNDMWStatusTitle02_create(void *object){
 beNDMWStatusTitle02_arkRegister();
 return meta_createInstance(beNDMWStatusTitle02_meta,object);
}
void *beNDMWStatusTitle02_getMeta(){
 if(!beNDMWStatusTitle02_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusTitle02_meta)[0x24/4]&4)) beNDMWStatusTitle02_arkRegister();
 return beNDMWStatusTitle02_meta;
}
}
#pragma pop
