#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWAfsSetupDataList_getMeta();
void beNDMWAfsSetupDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beNDMWAfsSetupData_arkRegister();
void igObjectList_register();
extern char beNDMWAfsSetupDataList_className[];
extern char beNDMWAfsSetupDataList_dependencies[];
extern char beNDMWAfsSetupDataList_meta[];
extern void *beNDMWAfsSetupData_meta;
void beNDMWAfsSetupDataList_register();
void *beNDMWAfsSetupDataList_getMetaCall();
}
extern "C" {
void beNDMWAfsSetupDataList_arkRegister(){
 meta_registerNow((int)beNDMWAfsSetupDataList_register);
}
void beNDMWAfsSetupDataList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWAfsSetupDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWAfsSetupDataList_getMetaCall,(int)beNDMWAfsSetupDataList_className,20,(int)beNDMWAfsSetupDataList_vtableRead,0,0,(int)beNDMWAfsSetupDataList_dependencies);
}
void *beNDMWAfsSetupDataList_getMetaCall(){return beNDMWAfsSetupDataList_getMeta();}
void *beNDMWAfsSetupData_getMeta(){
 if(!beNDMWAfsSetupData_meta || !(reinterpret_cast<unsigned int *>(beNDMWAfsSetupData_meta)[0x24/4]&4)) beNDMWAfsSetupData_arkRegister();
 return beNDMWAfsSetupData_meta;
}
}
#pragma pop
