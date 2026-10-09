#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlData_fieldInit();
void *beMatCtrlData_getMeta();
void beMatCtrlData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041F9C0[];
extern char lbl_804D1734[];
extern char lbl_805350C4[];
void beMatCtrlData_register();
void *beMatCtrlData_getMetaCall();
}
extern "C" {
void fn_802D0FC0(){
 fn_80066188((int)beMatCtrlData_register);
}
void beMatCtrlData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805350C4,(int)igNamedObject_register,(int)fn_80023CF4,(int)beMatCtrlData_getMetaCall,(int)lbl_8041F9C0,16,(int)beMatCtrlData_vtableRead,(int)beMatCtrlData_fieldInit,0,(int)lbl_804D1734);
}
void *beMatCtrlData_getMetaCall(){return beMatCtrlData_getMeta();}
}
#pragma pop
