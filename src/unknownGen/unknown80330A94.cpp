#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWStatusCtrlSkill_fieldInit();
void *beNDMWStatusCtrlSkill_getMeta();
void beNDMWStatusCtrlSkill_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char lbl_80453AAC[];
extern char lbl_804E1DE8[];
extern char lbl_80535ED8[];
void beNDMWStatusCtrlSkill_register();
void *beNDMWStatusCtrlSkill_getMetaCall();
}
extern "C" {
void fn_80330A94(){
 fn_80066188((int)beNDMWStatusCtrlSkill_register);
}
void beNDMWStatusCtrlSkill_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535ED8,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWStatusCtrlSkill_getMetaCall,(int)lbl_80453AAC,108,(int)beNDMWStatusCtrlSkill_vtableRead,(int)beNDMWStatusCtrlSkill_fieldInit,0,(int)lbl_804E1DE8);
}
void *beNDMWStatusCtrlSkill_getMetaCall(){return beNDMWStatusCtrlSkill_getMeta();}
}
#pragma pop
