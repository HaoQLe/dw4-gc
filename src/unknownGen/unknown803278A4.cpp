#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWStatusTitle04_getMeta();
void beNDMWStatusTitle04_vtableRead();
void beNDMWWindowTitle_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80326F88();
void beNDMWStatusTitle03_registerNow();
extern char beNDMWStatusTitle04_className[];
extern char beNDMWStatusTitle04_meta[];
extern void *beNDMWStatusTitle03_meta;
extern void *lbl_805621F4;
void beNDMWStatusTitle04_register();
void *beNDMWStatusTitle04_getMetaCall();
}
extern "C" {
void beNDMWStatusTitle04_registerNow(){
 meta_registerNow((int)beNDMWStatusTitle04_register);
}
void beNDMWStatusTitle04_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusTitle04_meta,(int)beNDMWWindowTitle_register,(int)fn_80326F88,(int)beNDMWStatusTitle04_getMetaCall,(int)beNDMWStatusTitle04_className,80,(int)beNDMWStatusTitle04_vtableRead,0,0,0);
}
void *beNDMWStatusTitle04_getMetaCall(){return beNDMWStatusTitle04_getMeta();}
void *beNDMWStatusTitle03_create(void *object){
 beNDMWStatusTitle03_registerNow();
 return meta_createInstance(beNDMWStatusTitle03_meta,object);
}
void *beNDMWStatusTitle03_metaObject(){
 if(!beNDMWStatusTitle03_meta) beNDMWStatusTitle03_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWStatusTitle03_meta;
}
void *beNDMWStatusTitle03_getMeta(){
 if(!beNDMWStatusTitle03_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusTitle03_meta)[0x24/4]&4)) beNDMWStatusTitle03_registerNow();
 return beNDMWStatusTitle03_meta;
}
}
#pragma pop
