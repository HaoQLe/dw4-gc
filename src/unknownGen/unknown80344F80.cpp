#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWAfsSetupInfo_fieldInit();
void *beNDMWAfsSetupInfo_getMeta();
void beNDMWAfsSetupInfo_vtableRead();
void *fn_800284EC();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igInfo_register();
extern char beNDMWAfsSetupInfo_className[];
extern char beNDMWAfsSetupInfo_dependencies[];
extern char beNDMWAfsSetupInfo_meta[];
void beNDMWAfsSetupInfo_register();
void *beNDMWAfsSetupInfo_getMetaCall();
}
extern "C" {
void beNDMWAfsSetupInfo_arkRegister(){
 meta_registerNow((int)beNDMWAfsSetupInfo_register);
}
void beNDMWAfsSetupInfo_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWAfsSetupInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)beNDMWAfsSetupInfo_getMetaCall,(int)beNDMWAfsSetupInfo_className,28,(int)beNDMWAfsSetupInfo_vtableRead,(int)beNDMWAfsSetupInfo_fieldInit,0,(int)beNDMWAfsSetupInfo_dependencies);
}
void *beNDMWAfsSetupInfo_getMetaCall(){return beNDMWAfsSetupInfo_getMeta();}
}
#pragma pop
