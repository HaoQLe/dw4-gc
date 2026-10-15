#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2DataSelIntf_fieldInit();
void *beNDMWLoadIntf2DataSelIntf_getMeta();
void beNDMWLoadIntf2DataSelIntf_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2DataSelIntf_className[];
extern char beNDMWLoadIntf2DataSelIntf_dependencies[];
extern char beNDMWLoadIntf2DataSelIntf_meta[];
void beNDMWLoadIntf2DataSelIntf_register();
void *beNDMWLoadIntf2DataSelIntf_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2DataSelIntf_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2DataSelIntf_register);
}
void beNDMWLoadIntf2DataSelIntf_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2DataSelIntf_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2DataSelIntf_getMetaCall,(int)beNDMWLoadIntf2DataSelIntf_className,92,(int)beNDMWLoadIntf2DataSelIntf_vtableRead,(int)beNDMWLoadIntf2DataSelIntf_fieldInit,0,(int)beNDMWLoadIntf2DataSelIntf_dependencies);
}
void *beNDMWLoadIntf2DataSelIntf_getMetaCall(){return beNDMWLoadIntf2DataSelIntf_getMeta();}
}
#pragma pop
