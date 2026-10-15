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
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWAfsStageLoad_registerNow();
void igNamedObject_register();
extern char beNDMWAfsSetupData_className[];
extern char lbl_804E418C[];
extern char lbl_804E4190[];
extern char lbl_804E4194[];
extern char lbl_804E4198[];
extern void *beNDMWAfsSetupData_meta;
extern void *beNDMWAfsStageLoad_meta;
void beNDMWAfsSetupData_register();
void *beNDMWAfsSetupData_getMetaCall();
void beNDMWAfsSetupData_fieldInit();
}
extern "C" {
void beNDMWAfsSetupData_registerNow(){
 meta_registerNow((int)beNDMWAfsSetupData_register);
}
void beNDMWAfsSetupData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWAfsSetupData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beNDMWAfsSetupData_getMetaCall,(int)beNDMWAfsSetupData_className,16,(int)beNDMWAfsSetupData_vtableRead,(int)beNDMWAfsSetupData_fieldInit,0,0);
}
void *beNDMWAfsSetupData_getMetaCall(){return beNDMWAfsSetupData_getMeta();}
void beNDMWAfsSetupData_fieldInit(){
 void *meta=beNDMWAfsSetupData_meta;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804E418C,0x1);
 fn_800659C0(meta,lbl_804E4190,lbl_804E4194,lbl_804E4198,field);
}
void *beNDMWAfsStageLoad_getMeta(){
 if(!beNDMWAfsStageLoad_meta || !(reinterpret_cast<unsigned int *>(beNDMWAfsStageLoad_meta)[0x24/4]&4)) beNDMWAfsStageLoad_registerNow();
 return beNDMWAfsStageLoad_meta;
}
}
#pragma pop
