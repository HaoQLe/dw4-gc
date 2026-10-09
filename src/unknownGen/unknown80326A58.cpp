#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beNDMWTitle2_fieldInit();
void *beNDMWTitle2_getMeta();
void beNDMWTitle2_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B381C();
void fn_803250AC();
extern char lbl_80453440[];
extern char lbl_804E197C[];
extern char lbl_80535D2C[];
void beNDMWTitle2_register();
void *beNDMWTitle2_getMetaCall();
}
extern "C" {
void fn_80326A58(){
 fn_80066188((int)beNDMWTitle2_register);
}
void beNDMWTitle2_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535D2C,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beNDMWTitle2_getMetaCall,(int)lbl_80453440,52,(int)beNDMWTitle2_vtableRead,(int)beNDMWTitle2_fieldInit,0,(int)lbl_804E197C);
}
void *beNDMWTitle2_getMetaCall(){return beNDMWTitle2_getMeta();}
}
#pragma pop
