#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWMcSlotXbox_fieldInit();
void *beNDMWMcSlotXbox_getMeta();
void beNDMWMcSlotXbox_vtableRead();
void beNDMWMcSlot_register();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8033FD10();
extern char beNDMWMcSlotXbox_className[];
extern char beNDMWMcSlotXbox_meta[];
void beNDMWMcSlotXbox_register();
void *beNDMWMcSlotXbox_getMetaCall();
}
extern "C" {
void beNDMWMcSlotXbox_arkRegister(){
 meta_registerNow((int)beNDMWMcSlotXbox_register);
}
void beNDMWMcSlotXbox_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMcSlotXbox_meta,(int)beNDMWMcSlot_register,(int)fn_8033FD10,(int)beNDMWMcSlotXbox_getMetaCall,(int)beNDMWMcSlotXbox_className,28,(int)beNDMWMcSlotXbox_vtableRead,(int)beNDMWMcSlotXbox_fieldInit,0,0);
}
void *beNDMWMcSlotXbox_getMetaCall(){return beNDMWMcSlotXbox_getMeta();}
}
#pragma pop
