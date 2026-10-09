#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterPlayerData_fieldInit();
void *beGeneraterPlayerData_getMeta();
void beGeneraterPlayerData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_80420124[];
extern char lbl_804D1E90[];
extern char lbl_805352CC[];
void beGeneraterPlayerData_register();
void *beGeneraterPlayerData_getMetaCall();
}
extern "C" {
void fn_802D7C34(){
 fn_80066188((int)beGeneraterPlayerData_register);
}
void beGeneraterPlayerData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805352CC,(int)igObject_register,(int)fn_800237D0,(int)beGeneraterPlayerData_getMetaCall,(int)lbl_80420124,24,(int)beGeneraterPlayerData_vtableRead,(int)beGeneraterPlayerData_fieldInit,0,(int)lbl_804D1E90);
}
void *beGeneraterPlayerData_getMetaCall(){return beGeneraterPlayerData_getMeta();}
}
#pragma pop
