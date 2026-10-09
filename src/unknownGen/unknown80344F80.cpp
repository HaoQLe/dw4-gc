#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWAfsSetupInfo_fieldInit();
void *beNDMWAfsSetupInfo_getMeta();
void beNDMWAfsSetupInfo_vtableRead();
void *fn_800284EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igInfo_register();
extern char lbl_80455668[];
extern char lbl_804E4158[];
extern char lbl_80536828[];
void beNDMWAfsSetupInfo_register();
void *beNDMWAfsSetupInfo_getMetaCall();
}
extern "C" {
void fn_80344F80(){
 fn_80066188((int)beNDMWAfsSetupInfo_register);
}
void beNDMWAfsSetupInfo_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536828,(int)igInfo_register,(int)fn_800284EC,(int)beNDMWAfsSetupInfo_getMetaCall,(int)lbl_80455668,28,(int)beNDMWAfsSetupInfo_vtableRead,(int)beNDMWAfsSetupInfo_fieldInit,0,(int)lbl_804E4158);
}
void *beNDMWAfsSetupInfo_getMetaCall(){return beNDMWAfsSetupInfo_getMeta();}
}
#pragma pop
