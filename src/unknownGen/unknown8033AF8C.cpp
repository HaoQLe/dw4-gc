#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMdlEnemy_getMeta();
void beNDMWMdlEnemy_vtableRead();
void beNDMWMdlPEBase_register();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80338E68();
void fn_8033B1B8();
extern char lbl_80454744[];
extern char lbl_80536228[];
extern void *lbl_8053622C;
void beNDMWMdlEnemy_register();
void *beNDMWMdlEnemy_getMetaCall();
}
extern "C" {
void fn_8033AF8C(){
 fn_80066188((int)beNDMWMdlEnemy_register);
}
void beNDMWMdlEnemy_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536228,(int)beNDMWMdlPEBase_register,(int)fn_80338E68,(int)beNDMWMdlEnemy_getMetaCall,(int)lbl_80454744,44,(int)beNDMWMdlEnemy_vtableRead,0,0,0);
}
void *beNDMWMdlEnemy_getMetaCall(){return beNDMWMdlEnemy_getMeta();}
void *fn_8033B040(void *object){
 fn_8033B1B8();
 return fn_8006546C(lbl_8053622C,object);
}
void *beNDMWMdlEnemyInfoWork_getMeta(){
 if(!lbl_8053622C || !(reinterpret_cast<unsigned int *>(lbl_8053622C)[0x24/4]&4)) fn_8033B1B8();
 return lbl_8053622C;
}
}
#pragma pop
