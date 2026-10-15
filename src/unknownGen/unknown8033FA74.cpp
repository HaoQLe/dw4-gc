#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWMcSlotList_getMeta();
void beNDMWMcSlotList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWMcSlotXbox_arkRegister();
void igObjectList_register();
extern char beNDMWMcSlotList_className[];
extern char beNDMWMcSlotList_dependencies[];
extern char beNDMWMcSlotList_meta[];
extern void *beNDMWMcSlotXbox_meta;
void beNDMWMcSlotList_register();
void *beNDMWMcSlotList_getMetaCall();
}
extern "C" {
void beNDMWMcSlotList_arkRegister(){
 meta_registerNow((int)beNDMWMcSlotList_register);
}
void beNDMWMcSlotList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWMcSlotList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWMcSlotList_getMetaCall,(int)beNDMWMcSlotList_className,20,(int)beNDMWMcSlotList_vtableRead,0,0,(int)beNDMWMcSlotList_dependencies);
}
void *beNDMWMcSlotList_getMetaCall(){return beNDMWMcSlotList_getMeta();}
void *beNDMWMcSlotXbox_create(void *object){
 beNDMWMcSlotXbox_arkRegister();
 return meta_createInstance(beNDMWMcSlotXbox_meta,object);
}
void *beNDMWMcSlotXbox_getMeta(){
 if(!beNDMWMcSlotXbox_meta || !(reinterpret_cast<unsigned int *>(beNDMWMcSlotXbox_meta)[0x24/4]&4)) beNDMWMcSlotXbox_arkRegister();
 return beNDMWMcSlotXbox_meta;
}
}
#pragma pop
