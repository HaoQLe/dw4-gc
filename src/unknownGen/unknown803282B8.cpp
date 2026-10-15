#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle01_getMeta();
void beNDMWStatusTitle01_vtableRead();
void beNDMWWindowTitle_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void beNDMWStatusTitle00_registerNow();
extern char beNDMWStatusTitle01_className[];
extern char beNDMWStatusTitle01_meta[];
extern void *beNDMWStatusTitle00_meta;
void beNDMWStatusTitle01_register();
void *beNDMWStatusTitle01_getMetaCall();
}
extern "C" {
void beNDMWStatusTitle01_registerNow(){
 meta_registerNow((int)beNDMWStatusTitle01_register);
}
void beNDMWStatusTitle01_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusTitle01_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle01_getMetaCall,(int)beNDMWStatusTitle01_className,80,(int)beNDMWStatusTitle01_vtableRead,0,0,0);
}
void *beNDMWStatusTitle01_getMetaCall(){return beNDMWStatusTitle01_getMeta();}
void *beNDMWStatusTitle00_create(void *object){
 beNDMWStatusTitle00_registerNow();
 return meta_createInstance(beNDMWStatusTitle00_meta,object);
}
void *beNDMWStatusTitle00_getMeta(){
 if(!beNDMWStatusTitle00_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusTitle00_meta)[0x24/4]&4)) beNDMWStatusTitle00_registerNow();
 return beNDMWStatusTitle00_meta;
}
}
#pragma pop
