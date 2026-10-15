#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWAfsStageLoad_fieldInit();
void *beNDMWAfsStageLoad_getMeta();
void beNDMWAfsStageLoad_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801159FC();
void fn_803250AC();
void igAction_register();
extern char beNDMWAfsStageLoad_className[];
extern char beNDMWAfsStageLoad_dependencies[];
extern char beNDMWAfsStageLoad_meta[];
void beNDMWAfsStageLoad_register();
void *beNDMWAfsStageLoad_getMetaCall();
}
extern "C" {
void beNDMWAfsStageLoad_arkRegister(){
 meta_registerNow((int)beNDMWAfsStageLoad_register);
}
void beNDMWAfsStageLoad_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWAfsStageLoad_meta,(int)igAction_register,(int)fn_801159FC,(int)beNDMWAfsStageLoad_getMetaCall,(int)beNDMWAfsStageLoad_className,16,(int)beNDMWAfsStageLoad_vtableRead,(int)beNDMWAfsStageLoad_fieldInit,0,(int)beNDMWAfsStageLoad_dependencies);
}
void *beNDMWAfsStageLoad_getMetaCall(){return beNDMWAfsStageLoad_getMeta();}
}
#pragma pop
