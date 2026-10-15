#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWAfsSetup_fieldInit();
void *beNDMWAfsSetup_getMeta();
void beNDMWAfsSetup_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_80284550();
void fn_803250AC();
void igInfoManager_register();
extern char beNDMWAfsSetup_className[];
extern char beNDMWAfsSetup_dependencies[];
extern char beNDMWAfsSetup_meta[];
void beNDMWAfsSetup_register();
void *beNDMWAfsSetup_getMetaCall();
}
extern "C" {
void beNDMWAfsSetup_arkRegister(){
 meta_registerNow((int)beNDMWAfsSetup_register);
}
void beNDMWAfsSetup_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWAfsSetup_meta,(int)igInfoManager_register,(int)fn_80284550,(int)beNDMWAfsSetup_getMetaCall,(int)beNDMWAfsSetup_className,40,(int)beNDMWAfsSetup_vtableRead,(int)beNDMWAfsSetup_fieldInit,0,(int)beNDMWAfsSetup_dependencies);
}
void *beNDMWAfsSetup_getMetaCall(){return beNDMWAfsSetup_getMeta();}
}
#pragma pop
