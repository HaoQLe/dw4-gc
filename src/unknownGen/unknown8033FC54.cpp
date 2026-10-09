#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMcSlotXbox_fieldInit();
void *beNDMWMcSlotXbox_getMeta();
void beNDMWMcSlotXbox_vtableRead();
void beNDMWMcSlot_register();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
extern char lbl_80454E18[];
extern char lbl_805365EC[];
void beNDMWMcSlotXbox_register();
void *beNDMWMcSlotXbox_getMetaCall();
}
extern "C" {
void fn_8033FC54(){
 fn_80066188((int)beNDMWMcSlotXbox_register);
}
void beNDMWMcSlotXbox_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_805365EC,(int)beNDMWMcSlot_register,(int)fn_8033FD10,(int)beNDMWMcSlotXbox_getMetaCall,(int)lbl_80454E18,28,(int)beNDMWMcSlotXbox_vtableRead,(int)beNDMWMcSlotXbox_fieldInit,0,0);
}
void *beNDMWMcSlotXbox_getMetaCall(){return beNDMWMcSlotXbox_getMeta();}
}
#pragma pop
