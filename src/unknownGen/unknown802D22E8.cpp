#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaDataObject_fieldInit();
void *beLuaDataObject_getMeta();
void beLuaDataObject_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041FAEC[];
extern char lbl_80535118[];
void beLuaDataObject_register();
void *beLuaDataObject_getMetaCall();
}
extern "C" {
void fn_802D22E8(){
 fn_80066188((int)beLuaDataObject_register);
}
void beLuaDataObject_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535118,(int)igObject_register,(int)fn_800237D0,(int)beLuaDataObject_getMetaCall,(int)lbl_8041FAEC,16,(int)beLuaDataObject_vtableRead,(int)beLuaDataObject_fieldInit,0,0);
}
void *beLuaDataObject_getMetaCall(){return beLuaDataObject_getMeta();}
}
#pragma pop
