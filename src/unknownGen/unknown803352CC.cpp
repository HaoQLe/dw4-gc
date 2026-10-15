#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beSaveIntfComMdlDataList_getMeta();
void beSaveIntfComMdlDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void beSaveIntfComMdlData_arkRegister();
void igObjectList_register();
extern char beSaveIntfComMdlDataList_className[];
extern char beSaveIntfComMdlDataList_dependencies[];
extern char beSaveIntfComMdlDataList_meta[];
extern void *beSaveIntfComMdlData_meta;
void beSaveIntfComMdlDataList_register();
void *beSaveIntfComMdlDataList_getMetaCall();
}
extern "C" {
void beSaveIntfComMdlDataList_arkRegister(){
 meta_registerNow((int)beSaveIntfComMdlDataList_register);
}
void beSaveIntfComMdlDataList_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beSaveIntfComMdlDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beSaveIntfComMdlDataList_getMetaCall,(int)beSaveIntfComMdlDataList_className,20,(int)beSaveIntfComMdlDataList_vtableRead,0,0,(int)beSaveIntfComMdlDataList_dependencies);
}
void *beSaveIntfComMdlDataList_getMetaCall(){return beSaveIntfComMdlDataList_getMeta();}
void *beSaveIntfComMdlData_getMeta(){
 if(!beSaveIntfComMdlData_meta || !(reinterpret_cast<unsigned int *>(beSaveIntfComMdlData_meta)[0x24/4]&4)) beSaveIntfComMdlData_arkRegister();
 return beSaveIntfComMdlData_meta;
}
}
#pragma pop
