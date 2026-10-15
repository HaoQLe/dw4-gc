#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWItemBase_register();
void beNDMWItemWaza_fieldInit();
void *beNDMWItemWaza_getMeta();
void beNDMWItemWaza_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_803425BC();
extern char beNDMWItemWaza_className[];
extern char beNDMWItemWaza_meta[];
void beNDMWItemWaza_register();
void *beNDMWItemWaza_getMetaCall();
}
extern "C" {
void beNDMWItemWaza_arkRegister(){
 meta_registerNow((int)beNDMWItemWaza_register);
}
void beNDMWItemWaza_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWItemWaza_meta,(int)beNDMWItemBase_register,(int)fn_803425BC,(int)beNDMWItemWaza_getMetaCall,(int)beNDMWItemWaza_className,24,(int)beNDMWItemWaza_vtableRead,(int)beNDMWItemWaza_fieldInit,0,0);
}
void *beNDMWItemWaza_getMetaCall(){return beNDMWItemWaza_getMeta();}
}
#pragma pop
