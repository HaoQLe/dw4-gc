#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadSlotPlayer_fieldInit();
void *beNDMWLoadSlotPlayer_getMeta();
void beNDMWLoadSlotPlayer_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_80454ECC[];
extern char lbl_804E395C[];
extern char lbl_80536620[];
void beNDMWLoadSlotPlayer_register();
void *beNDMWLoadSlotPlayer_getMetaCall();
}
extern "C" {
void fn_80340654(){
 fn_80066188((int)beNDMWLoadSlotPlayer_register);
}
void beNDMWLoadSlotPlayer_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536620,(int)igObject_register,(int)fn_800237D0,(int)beNDMWLoadSlotPlayer_getMetaCall,(int)lbl_80454ECC,20,(int)beNDMWLoadSlotPlayer_vtableRead,(int)beNDMWLoadSlotPlayer_fieldInit,0,(int)lbl_804E395C);
}
void *beNDMWLoadSlotPlayer_getMetaCall(){return beNDMWLoadSlotPlayer_getMeta();}
}
#pragma pop
