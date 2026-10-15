#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWLoadSlotPlayerList_getMeta();
void beNDMWLoadSlotPlayerList_vtableRead();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWLoadSlotPlayer_arkRegister();
void igObjectList_register();
extern char beNDMWLoadSlotPlayerList_className[];
extern char beNDMWLoadSlotPlayerList_dependencies[];
extern char beNDMWLoadSlotPlayerList_meta[];
extern void *beNDMWLoadSlotPlayer_meta;
extern void *lbl_805621F4;
void beNDMWLoadSlotPlayerList_register();
void *beNDMWLoadSlotPlayerList_getMetaCall();
}
extern "C" {
void beNDMWLoadSlotPlayerList_arkRegister(){
 meta_registerNow((int)beNDMWLoadSlotPlayerList_register);
}
void beNDMWLoadSlotPlayerList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadSlotPlayerList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWLoadSlotPlayerList_getMetaCall,(int)beNDMWLoadSlotPlayerList_className,20,(int)beNDMWLoadSlotPlayerList_vtableRead,0,0,(int)beNDMWLoadSlotPlayerList_dependencies);
}
void *beNDMWLoadSlotPlayerList_getMetaCall(){return beNDMWLoadSlotPlayerList_getMeta();}
void *beNDMWLoadSlotPlayer_create(void *object){
 beNDMWLoadSlotPlayer_arkRegister();
 return meta_createInstance(beNDMWLoadSlotPlayer_meta,object);
}
void *beNDMWLoadSlotPlayer_metaObject(){
 if(!beNDMWLoadSlotPlayer_meta) beNDMWLoadSlotPlayer_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beNDMWLoadSlotPlayer_meta;
}
void *beNDMWLoadSlotPlayer_getMeta(){
 if(!beNDMWLoadSlotPlayer_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadSlotPlayer_meta)[0x24/4]&4)) beNDMWLoadSlotPlayer_arkRegister();
 return beNDMWLoadSlotPlayer_meta;
}
}
#pragma pop
