#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWStatusCtrlBaseEquip_register();
void *beNDMWStatusMainSlot_getMeta();
void beNDMWStatusMainSlot_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_80332910();
void beNDMWStatusPowerSocket_arkRegister();
extern char beNDMWStatusMainSlot_className[];
extern char beNDMWStatusMainSlot_meta[];
extern void *beNDMWStatusPowerSocket_meta;
void beNDMWStatusMainSlot_register();
void *beNDMWStatusMainSlot_getMetaCall();
}
extern "C" {
void beNDMWStatusMainSlot_arkRegister(){
 meta_registerNow((int)beNDMWStatusMainSlot_register);
}
void beNDMWStatusMainSlot_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusMainSlot_meta,(int)beNDMWStatusCtrlBaseEquip_register,(int)fn_80332910,(int)beNDMWStatusMainSlot_getMetaCall,(int)beNDMWStatusMainSlot_className,124,(int)beNDMWStatusMainSlot_vtableRead,0,0,0);
}
void *beNDMWStatusMainSlot_getMetaCall(){return beNDMWStatusMainSlot_getMeta();}
void *beNDMWStatusPowerSocket_create(void *object){
 beNDMWStatusPowerSocket_arkRegister();
 return meta_createInstance(beNDMWStatusPowerSocket_meta,object);
}
void *beNDMWStatusPowerSocket_getMeta(){
 if(!beNDMWStatusPowerSocket_meta || !(reinterpret_cast<unsigned int *>(beNDMWStatusPowerSocket_meta)[0x24/4]&4)) beNDMWStatusPowerSocket_arkRegister();
 return beNDMWStatusPowerSocket_meta;
}
}
#pragma pop
