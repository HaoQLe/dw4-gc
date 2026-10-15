#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWLoadSlotPlayer_fieldInit();
void *beNDMWLoadSlotPlayer_getMeta();
void beNDMWLoadSlotPlayer_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWLoadSlotPlayer_className[];
extern char beNDMWLoadSlotPlayer_dependencies[];
extern char beNDMWLoadSlotPlayer_meta[];
void beNDMWLoadSlotPlayer_register();
void *beNDMWLoadSlotPlayer_getMetaCall();
}
extern "C" {
void beNDMWLoadSlotPlayer_arkRegister(){
 meta_registerNow((int)beNDMWLoadSlotPlayer_register);
}
void beNDMWLoadSlotPlayer_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadSlotPlayer_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWLoadSlotPlayer_getMetaCall,(int)beNDMWLoadSlotPlayer_className,20,(int)beNDMWLoadSlotPlayer_vtableRead,(int)beNDMWLoadSlotPlayer_fieldInit,0,(int)beNDMWLoadSlotPlayer_dependencies);
}
void *beNDMWLoadSlotPlayer_getMetaCall(){return beNDMWLoadSlotPlayer_getMeta();}
}
#pragma pop
