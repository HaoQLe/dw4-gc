#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWLoadIntf2DegiStateList_getMeta();
void beNDMWLoadIntf2DegiStateList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWLoadIntf2DegiState_arkRegister();
void igObjectList_register();
extern char beNDMWLoadIntf2DegiStateList_className[];
extern char beNDMWLoadIntf2DegiStateList_dependencies[];
extern char beNDMWLoadIntf2DegiStateList_meta[];
extern void *beNDMWLoadIntf2DegiState_meta;
void beNDMWLoadIntf2DegiStateList_register();
void *beNDMWLoadIntf2DegiStateList_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2DegiStateList_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2DegiStateList_register);
}
void beNDMWLoadIntf2DegiStateList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2DegiStateList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWLoadIntf2DegiStateList_getMetaCall,(int)beNDMWLoadIntf2DegiStateList_className,20,(int)beNDMWLoadIntf2DegiStateList_vtableRead,0,0,(int)beNDMWLoadIntf2DegiStateList_dependencies);
}
void *beNDMWLoadIntf2DegiStateList_getMetaCall(){return beNDMWLoadIntf2DegiStateList_getMeta();}
void *beNDMWLoadIntf2DegiState_create(void *object){
 beNDMWLoadIntf2DegiState_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2DegiState_meta,object);
}
void *beNDMWLoadIntf2DegiState_getMeta(){
 if(!beNDMWLoadIntf2DegiState_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2DegiState_meta)[0x24/4]&4)) beNDMWLoadIntf2DegiState_arkRegister();
 return beNDMWLoadIntf2DegiState_meta;
}
}
#pragma pop
