#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWAfsSetupData_getMeta();
void beNDMWAfsSetupData_vtableRead();
void *fn_80023CF4();
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWAfsStageLoad_arkRegister();
void igNamedObject_register();
extern char beNDMWAfsSetupData_className[];
extern char beNDMWAfsSetupData_fieldTypes[];
extern char beNDMWAfsSetupData_fieldNames[];
extern char beNDMWAfsSetupData_fieldStorage[];
extern char beNDMWAfsSetupData_fieldOffsets[];
extern void *beNDMWAfsSetupData_meta;
extern void *beNDMWAfsStageLoad_meta;
void beNDMWAfsSetupData_register();
void *beNDMWAfsSetupData_getMetaCall();
void beNDMWAfsSetupData_fieldInit();
}
extern "C" {
void beNDMWAfsSetupData_arkRegister(){
 meta_registerNow((int)beNDMWAfsSetupData_register);
}
void beNDMWAfsSetupData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)&beNDMWAfsSetupData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beNDMWAfsSetupData_getMetaCall,(int)beNDMWAfsSetupData_className,16,(int)beNDMWAfsSetupData_vtableRead,(int)beNDMWAfsSetupData_fieldInit,0,0);
}
void *beNDMWAfsSetupData_getMetaCall(){return beNDMWAfsSetupData_getMeta();}
void beNDMWAfsSetupData_fieldInit(){
 void *meta=beNDMWAfsSetupData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,beNDMWAfsSetupData_fieldTypes,0x1);
 meta_setupFields(meta,beNDMWAfsSetupData_fieldNames,beNDMWAfsSetupData_fieldStorage,beNDMWAfsSetupData_fieldOffsets,field);
}
void *beNDMWAfsStageLoad_getMeta(){
 if(!beNDMWAfsStageLoad_meta || !(reinterpret_cast<unsigned int *>(beNDMWAfsStageLoad_meta)[0x24/4]&4)) beNDMWAfsStageLoad_arkRegister();
 return beNDMWAfsStageLoad_meta;
}
}
#pragma pop
