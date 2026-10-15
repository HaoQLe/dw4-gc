#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void *beNDMWLoadIntf2Info_getMeta();
void beNDMWLoadIntf2Info_vtableRead();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B2E3C();
void fn_803250AC();
void beNDMWLoadIntf2NameSel_arkRegister();
extern char beNDMWLoadIntf2Info_className[];
extern char beNDMWLoadIntf2Info_meta[];
extern void *beNDMWLoadIntf2NameSel_meta;
void beNDMWLoadIntf2Info_register();
void *beNDMWLoadIntf2Info_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2Info_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2Info_register);
}
void beNDMWLoadIntf2Info_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2Info_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beNDMWLoadIntf2Info_getMetaCall,(int)beNDMWLoadIntf2Info_className,28,(int)beNDMWLoadIntf2Info_vtableRead,0,0,0);
}
void *beNDMWLoadIntf2Info_getMetaCall(){return beNDMWLoadIntf2Info_getMeta();}
void *beNDMWLoadIntf2NameSel_create(void *object){
 beNDMWLoadIntf2NameSel_arkRegister();
 return meta_createInstance(beNDMWLoadIntf2NameSel_meta,object);
}
void *beNDMWLoadIntf2NameSel_getMeta(){
 if(!beNDMWLoadIntf2NameSel_meta || !(reinterpret_cast<unsigned int *>(beNDMWLoadIntf2NameSel_meta)[0x24/4]&4)) beNDMWLoadIntf2NameSel_arkRegister();
 return beNDMWLoadIntf2NameSel_meta;
}
}
#pragma pop
