#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beLuaDataList_getMeta();
void beLuaDataList_vtableRead();
void *fn_80024180();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802D1F20();
void igObjectList_register();
extern char lbl_8041FAB0[];
extern char lbl_804D1840[];
extern char lbl_80535108[];
extern void *lbl_8053510C;
void beLuaDataList_register();
void *beLuaDataList_getMetaCall();
}
extern "C" {
void fn_802D1D34(){
 fn_80066188((int)beLuaDataList_register);
}
void beLuaDataList_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535108,(int)igObjectList_register,(int)fn_80024180,(int)beLuaDataList_getMetaCall,(int)lbl_8041FAB0,20,(int)beLuaDataList_vtableRead,0,0,(int)lbl_804D1840);
}
void *beLuaDataList_getMetaCall(){return beLuaDataList_getMeta();}
void *beLuaData_getMeta(){
 if(!lbl_8053510C || !(reinterpret_cast<unsigned int *>(lbl_8053510C)[0x24/4]&4)) fn_802D1F20();
 return lbl_8053510C;
}
}
#pragma pop
