#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoData_register();
void beSeInfoData_fieldInit();
void *beSeInfoData_getMeta();
void beSeInfoData_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B8770();
extern char lbl_8041D9FC[];
extern char lbl_804CF7C8[];
extern char lbl_805347FC[];
void beSeInfoData_register();
void *beSeInfoData_getMetaCall();
}
extern "C" {
void fn_802BB050(){
 fn_80066188((int)beSeInfoData_register);
}
void beSeInfoData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347FC,(int)beBaseInfoData_register,(int)fn_802B8770,(int)beSeInfoData_getMetaCall,(int)lbl_8041D9FC,20,(int)beSeInfoData_vtableRead,(int)beSeInfoData_fieldInit,0,(int)lbl_804CF7C8);
}
void *beSeInfoData_getMetaCall(){return beSeInfoData_getMeta();}
}
#pragma pop
