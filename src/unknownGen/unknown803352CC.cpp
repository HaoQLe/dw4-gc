#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSaveIntfComMdlDataList_getMeta();
void beSaveIntfComMdlDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void fn_803354A4();
void igObjectList_register();
extern char lbl_80453EE0[];
extern char lbl_804E2198[];
extern char lbl_80535FF8[];
extern void *lbl_80535FFC;
void beSaveIntfComMdlDataList_register();
void *beSaveIntfComMdlDataList_getMetaCall();
}
extern "C" {
void fn_803352CC(){
 fn_80066188((int)beSaveIntfComMdlDataList_register);
}
void beSaveIntfComMdlDataList_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535FF8,(int)igObjectList_register,(int)fn_80024180,(int)beSaveIntfComMdlDataList_getMetaCall,(int)lbl_80453EE0,20,(int)beSaveIntfComMdlDataList_vtableRead,0,0,(int)lbl_804E2198);
}
void *beSaveIntfComMdlDataList_getMetaCall(){return beSaveIntfComMdlDataList_getMeta();}
void *beSaveIntfComMdlData_getMeta(){
 if(!lbl_80535FFC || !(reinterpret_cast<unsigned int *>(lbl_80535FFC)[0x24/4]&4)) fn_803354A4();
 return lbl_80535FFC;
}
}
#pragma pop
