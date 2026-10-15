#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLuaDataList_getMeta();
void beLuaDataList_vtableRead();
void *fn_80024180();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beLuaData_registerNow();
void igObjectList_register();
extern char beLuaDataList_className[];
extern char lbl_804D1840[];
extern char beLuaDataList_meta[];
extern void *beLuaData_meta;
void beLuaDataList_register();
void *beLuaDataList_getMetaCall();
}
extern "C" {
void beLuaDataList_registerNow(){
 meta_registerNow((int)beLuaDataList_register);
}
void beLuaDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beLuaDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beLuaDataList_getMetaCall,(int)beLuaDataList_className,20,(int)beLuaDataList_vtableRead,0,0,(int)lbl_804D1840);
}
void *beLuaDataList_getMetaCall(){return beLuaDataList_getMeta();}
void *beLuaData_getMeta(){
 if(!beLuaData_meta || !(reinterpret_cast<unsigned int *>(beLuaData_meta)[0x24/4]&4)) beLuaData_registerNow();
 return beLuaData_meta;
}
}
#pragma pop
