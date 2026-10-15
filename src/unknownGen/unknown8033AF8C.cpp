#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMdlEnemy_getMeta();
void beNDMWMdlEnemy_vtableRead();
void beNDMWMdlPEBase_register();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338E68();
void beNDMWMdlEnemyInfoWork_registerNow();
extern char beNDMWMdlEnemy_className[];
extern char beNDMWMdlEnemy_meta[];
extern void *beNDMWMdlEnemyInfoWork_meta;
void beNDMWMdlEnemy_register();
void *beNDMWMdlEnemy_getMetaCall();
}
extern "C" {
void beNDMWMdlEnemy_registerNow(){
 meta_registerNow((int)beNDMWMdlEnemy_register);
}
void beNDMWMdlEnemy_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMdlEnemy_meta,(int)beNDMWMdlPEBase_register,(int)fn_80338E68,(int)beNDMWMdlEnemy_getMetaCall,(int)beNDMWMdlEnemy_className,44,(int)beNDMWMdlEnemy_vtableRead,0,0,0);
}
void *beNDMWMdlEnemy_getMetaCall(){return beNDMWMdlEnemy_getMeta();}
void *beNDMWMdlEnemyInfoWork_create(void *object){
 beNDMWMdlEnemyInfoWork_registerNow();
 return meta_createInstance(beNDMWMdlEnemyInfoWork_meta,object);
}
void *beNDMWMdlEnemyInfoWork_getMeta(){
 if(!beNDMWMdlEnemyInfoWork_meta || !(reinterpret_cast<unsigned int *>(beNDMWMdlEnemyInfoWork_meta)[0x24/4]&4)) beNDMWMdlEnemyInfoWork_registerNow();
 return beNDMWMdlEnemyInfoWork_meta;
}
}
#pragma pop
