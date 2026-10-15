#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle02_getMeta();
void beNDMWStatusTitle02_vtableRead();
void beNDMWWindowTitle_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void beNDMWStatusTitle01_registerNow();
extern char beNDMWStatusTitle02_className[];
extern char beNDMWStatusTitle02_meta[];
extern void *beNDMWStatusTitle01_meta;
void beNDMWStatusTitle02_register();
void *beNDMWStatusTitle02_getMetaCall();
}
extern "C" {
void beNDMWStatusTitle02_registerNow(){
 meta_registerNow((int)beNDMWStatusTitle02_register);
}
void beNDMWStatusTitle02_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusTitle02_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle02_getMetaCall,(int)beNDMWStatusTitle02_className,80,(int)beNDMWStatusTitle02_vtableRead,0,0,0);
}
void *beNDMWStatusTitle02_getMetaCall(){return beNDMWStatusTitle02_getMeta();}
void *beNDMWStatusTitle01_create(void *object){
 beNDMWStatusTitle01_registerNow();
 return meta_createInstance(beNDMWStatusTitle01_meta,object);
}
void *beNDMWStatusTitle01_getMeta(){
 if(!beNDMWStatusTitle01_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusTitle01_meta)[0x24/4]&4)) beNDMWStatusTitle01_registerNow();
 return beNDMWStatusTitle01_meta;
}
}
#pragma pop
