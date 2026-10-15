#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMdlEnemyInfoWork_getMeta();
void beNDMWMdlPEBaseInfoWork_register();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80339484();
void fn_8033B0CC();
void beNDMWMdlEffect_arkRegister();
extern char beNDMWMdlEnemyInfoWork_className[];
extern char beNDMWMdlEnemyInfoWork_meta[];
extern void *beNDMWMdlEffect_meta;
extern void *lbl_805621F4;
void beNDMWMdlEnemyInfoWork_register();
void *beNDMWMdlEnemyInfoWork_getMetaCall();
}
extern "C" {
void beNDMWMdlEnemyInfoWork_arkRegister(){
 meta_registerNow((int)beNDMWMdlEnemyInfoWork_register);
}
void beNDMWMdlEnemyInfoWork_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlEnemyInfoWork_meta,(int)beNDMWMdlPEBaseInfoWork_register,(int)fn_80339484,(int)beNDMWMdlEnemyInfoWork_getMetaCall,(int)beNDMWMdlEnemyInfoWork_className,276,(int)fn_8033B0CC,0,0,0);
}
void *beNDMWMdlEnemyInfoWork_getMetaCall(){return beNDMWMdlEnemyInfoWork_getMeta();}
void *beNDMWMdlEffect_create(void *object){
 beNDMWMdlEffect_arkRegister();
 return meta_createInstance(beNDMWMdlEffect_meta,object);
}
void *beNDMWMdlEffect_metaObject(){
 if(!beNDMWMdlEffect_meta) beNDMWMdlEffect_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWMdlEffect_meta;
}
void *beNDMWMdlEffect_getMeta(){
 if(!beNDMWMdlEffect_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlEffect_meta)[0x24/4]&4)) beNDMWMdlEffect_arkRegister();
 return beNDMWMdlEffect_meta;
}
}
#pragma pop
