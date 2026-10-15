#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWListCtrl_register();
void beNDMWStatusCtrlSkill_fieldInit();
void *beNDMWStatusCtrlSkill_getMeta();
void beNDMWStatusCtrlSkill_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void *fn_8032BD54();
extern char beNDMWStatusCtrlSkill_className[];
extern char lbl_804E1DE8[];
extern char beNDMWStatusCtrlSkill_meta[];
void beNDMWStatusCtrlSkill_register();
void *beNDMWStatusCtrlSkill_getMetaCall();
}
extern "C" {
void beNDMWStatusCtrlSkill_registerNow(){
 meta_registerNow((int)beNDMWStatusCtrlSkill_register);
}
void beNDMWStatusCtrlSkill_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWStatusCtrlSkill_meta,(int)beNDMWListCtrl_register,(int)fn_8032BD54,(int)beNDMWStatusCtrlSkill_getMetaCall,(int)beNDMWStatusCtrlSkill_className,108,(int)beNDMWStatusCtrlSkill_vtableRead,(int)beNDMWStatusCtrlSkill_fieldInit,0,(int)lbl_804E1DE8);
}
void *beNDMWStatusCtrlSkill_getMetaCall(){return beNDMWStatusCtrlSkill_getMeta();}
}
#pragma pop
