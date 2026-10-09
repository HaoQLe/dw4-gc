#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beNDMWAfsSetupDataList_getMeta();
void beNDMWAfsSetupDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_803453B4();
void igObjectList_register();
extern char lbl_80455698[];
extern char lbl_804E4184[];
extern char lbl_80536834[];
extern void *lbl_80536838;
void beNDMWAfsSetupDataList_register();
void *beNDMWAfsSetupDataList_getMetaCall();
}
extern "C" {
void fn_80345210(){
 fn_80066188((int)beNDMWAfsSetupDataList_register);
}
void beNDMWAfsSetupDataList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536834,(int)igObjectList_register,(int)fn_80024180,(int)beNDMWAfsSetupDataList_getMetaCall,(int)lbl_80455698,20,(int)beNDMWAfsSetupDataList_vtableRead,0,0,(int)lbl_804E4184);
}
void *beNDMWAfsSetupDataList_getMetaCall(){return beNDMWAfsSetupDataList_getMeta();}
void *beNDMWAfsSetupData_getMeta(){
 if(!lbl_80536838 || !(reinterpret_cast<unsigned int *>(lbl_80536838)[0x24/4]&4)) fn_803453B4();
 return lbl_80536838;
}
}
#pragma pop
