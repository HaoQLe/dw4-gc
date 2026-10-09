#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlInfoWork_fieldInit();
void *beMatCtrlInfoWork_getMeta();
void beMatCtrlInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041F8EC[];
extern char lbl_804D1648[];
extern char lbl_80535080[];
void beMatCtrlInfoWork_register();
void *beMatCtrlInfoWork_getMetaCall();
}
extern "C" {
void fn_802CFFC0(){
 fn_80066188((int)beMatCtrlInfoWork_register);
}
void beMatCtrlInfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535080,(int)igObject_register,(int)fn_800237D0,(int)beMatCtrlInfoWork_getMetaCall,(int)lbl_8041F8EC,16,(int)beMatCtrlInfoWork_vtableRead,(int)beMatCtrlInfoWork_fieldInit,0,(int)lbl_804D1648);
}
void *beMatCtrlInfoWork_getMetaCall(){return beMatCtrlInfoWork_getMeta();}
}
#pragma pop
