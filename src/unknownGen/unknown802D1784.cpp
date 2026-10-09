#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beLuaState_fieldInit();
void *beLuaState_getMeta();
void *beLuaState_parentMeta();
void beLuaState_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igLuaState_register();
extern char lbl_8041FA94[];
extern char lbl_805350F8[];
void beLuaState_register();
void *beLuaState_getMetaCall();
}
extern "C" {
void fn_802D1784(){
 fn_80066188((int)beLuaState_register);
}
void beLuaState_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350F8,(int)igLuaState_register,(int)beLuaState_parentMeta,(int)beLuaState_getMetaCall,(int)lbl_8041FA94,24,(int)beLuaState_vtableRead,(int)beLuaState_fieldInit,0,0);
}
void *beLuaState_getMetaCall(){return beLuaState_getMeta();}
}
#pragma pop
