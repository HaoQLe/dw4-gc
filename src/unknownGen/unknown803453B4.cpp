#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWAfsSetupData_getMeta();
void beNDMWAfsSetupData_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_803455D4();
void igNamedObject_register();
extern char lbl_804556B0[];
extern char lbl_804E418C[];
extern char lbl_804E4190[];
extern char lbl_804E4194[];
extern char lbl_804E4198[];
extern void *lbl_80536838;
extern void *lbl_80536840;
void beNDMWAfsSetupData_register();
void *beNDMWAfsSetupData_getMetaCall();
void beNDMWAfsSetupData_fieldInit();
}
extern "C" {
void fn_803453B4(){
 fn_80066188((int)beNDMWAfsSetupData_register);
}
void beNDMWAfsSetupData_register(){
 fn_803250AC();
 fn_80066204(0,(int)&lbl_80536838,(int)igNamedObject_register,(int)fn_80023CF4,(int)beNDMWAfsSetupData_getMetaCall,(int)lbl_804556B0,16,(int)beNDMWAfsSetupData_vtableRead,(int)beNDMWAfsSetupData_fieldInit,0,0);
}
void *beNDMWAfsSetupData_getMetaCall(){return beNDMWAfsSetupData_getMeta();}
void beNDMWAfsSetupData_fieldInit(){
 void *meta=lbl_80536838;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E418C,0x1);
 fn_800659C0(meta,lbl_804E4190,lbl_804E4194,lbl_804E4198,field);
}
void *beNDMWAfsStageLoad_getMeta(){
 if(!lbl_80536840 || !(reinterpret_cast<unsigned int *>(lbl_80536840)[0x24/4]&4)) fn_803455D4();
 return lbl_80536840;
}
}
#pragma pop
