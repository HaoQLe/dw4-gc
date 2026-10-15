#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadSavePlWork_fieldInit();
void *beNDMWLoadSavePlWork_getMeta();
void beNDMWLoadSavePlWork_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWLoadSavePlWork_className[];
extern char beNDMWLoadSavePlWork_dependencies[];
extern char beNDMWLoadSavePlWork_meta[];
void beNDMWLoadSavePlWork_register();
void *beNDMWLoadSavePlWork_getMetaCall();
}
extern "C" {
void beNDMWLoadSavePlWork_arkRegister(){
 meta_registerNow((int)beNDMWLoadSavePlWork_register);
}
void beNDMWLoadSavePlWork_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadSavePlWork_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWLoadSavePlWork_getMetaCall,(int)beNDMWLoadSavePlWork_className,52,(int)beNDMWLoadSavePlWork_vtableRead,(int)beNDMWLoadSavePlWork_fieldInit,0,(int)beNDMWLoadSavePlWork_dependencies);
}
void *beNDMWLoadSavePlWork_getMetaCall(){return beNDMWLoadSavePlWork_getMeta();}
}
#pragma pop
