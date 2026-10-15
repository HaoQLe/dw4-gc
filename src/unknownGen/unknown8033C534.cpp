#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beNDMWLoadIntf2NameSel_fieldInit();
void *beNDMWLoadIntf2NameSel_getMeta();
void beNDMWLoadIntf2NameSel_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802B8770();
void fn_803250AC();
extern char beNDMWLoadIntf2NameSel_className[];
extern char beNDMWLoadIntf2NameSel_dependencies[];
extern char beNDMWLoadIntf2NameSel_meta[];
void beNDMWLoadIntf2NameSel_register();
void *beNDMWLoadIntf2NameSel_getMetaCall();
}
extern "C" {
void beNDMWLoadIntf2NameSel_arkRegister(){
 meta_registerNow((int)beNDMWLoadIntf2NameSel_register);
}
void beNDMWLoadIntf2NameSel_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWLoadIntf2NameSel_meta,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beNDMWLoadIntf2NameSel_getMetaCall,(int)beNDMWLoadIntf2NameSel_className,288,(int)beNDMWLoadIntf2NameSel_vtableRead,(int)beNDMWLoadIntf2NameSel_fieldInit,0,(int)beNDMWLoadIntf2NameSel_dependencies);
}
void *beNDMWLoadIntf2NameSel_getMetaCall(){return beNDMWLoadIntf2NameSel_getMeta();}
}
#pragma pop
