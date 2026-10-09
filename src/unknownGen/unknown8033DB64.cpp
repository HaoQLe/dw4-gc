#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWLoadIntf2DegiStateList_getMeta();
void beNDMWLoadIntf2DegiStateList_vtableRead();
void *fn_80024180();
void *fn_8006546C(void *,void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_8033DCF4();
void igObjectList_register();
extern char lbl_80454AE0[];
extern char lbl_804E32B8[];
extern char lbl_80536458[];
extern void *lbl_8053645C;
void beNDMWLoadIntf2DegiStateList_register();
void *beNDMWLoadIntf2DegiStateList_getMetaCall();
}
extern "C" {
void fn_8033DB64(){
 fn_80066188((int)beNDMWLoadIntf2DegiStateList_register);
}
void beNDMWLoadIntf2DegiStateList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536458,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWLoadIntf2DegiStateList_getMetaCall,(int)lbl_80454AE0,20,(int)beNDMWLoadIntf2DegiStateList_vtableRead,0,0,(int)lbl_804E32B8);
}
void *beNDMWLoadIntf2DegiStateList_getMetaCall(){return beNDMWLoadIntf2DegiStateList_getMeta();}
void *fn_8033DC20(void *object){
 fn_8033DCF4();
 return fn_8006546C(lbl_8053645C,object);
}
void *beNDMWLoadIntf2DegiState_getMeta(){
 if(!lbl_8053645C || !(reinterpret_cast<unsigned int *>(lbl_8053645C)[0x24/4]&4)) fn_8033DCF4();
 return lbl_8053645C;
}
}
#pragma pop
