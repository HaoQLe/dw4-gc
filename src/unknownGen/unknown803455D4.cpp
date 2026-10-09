#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWAfsStageLoad_fieldInit();
void *beNDMWAfsStageLoad_getMeta();
void beNDMWAfsStageLoad_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_801159FC();
void fn_803250AC();
void igAction_register();
extern char lbl_804556D0[];
extern char lbl_804E419C[];
extern char lbl_80536840[];
void beNDMWAfsStageLoad_register();
void *beNDMWAfsStageLoad_getMetaCall();
}
extern "C" {
void fn_803455D4(){
 fn_80066188((int)beNDMWAfsStageLoad_register);
}
void beNDMWAfsStageLoad_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536840,(int)igAction_register,(int)fn_801159FC,(int)beNDMWAfsStageLoad_getMetaCall,(int)lbl_804556D0,16,(int)beNDMWAfsStageLoad_vtableRead,(int)beNDMWAfsStageLoad_fieldInit,0,(int)lbl_804E419C);
}
void *beNDMWAfsStageLoad_getMetaCall(){return beNDMWAfsStageLoad_getMeta();}
}
#pragma pop
