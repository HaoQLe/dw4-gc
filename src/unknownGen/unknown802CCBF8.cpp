#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlData_fieldInit();
void *beModelCtrlData_getMeta();
void beModelCtrlData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041F368[];
extern char lbl_804D106C[];
extern char lbl_80534F40[];
void beModelCtrlData_register();
void *beModelCtrlData_getMetaCall();
}
extern "C" {
void fn_802CCBF8(){
 fn_80066188((int)beModelCtrlData_register);
}
void beModelCtrlData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F40,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlData_getMetaCall,(int)lbl_8041F368,16,(int)beModelCtrlData_vtableRead,(int)beModelCtrlData_fieldInit,0,(int)lbl_804D106C);
}
void *beModelCtrlData_getMetaCall(){return beModelCtrlData_getMeta();}
}
#pragma pop
