#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMeterCtrlOneData_fieldInit();
void *beMeterCtrlOneData_getMeta();
void beMeterCtrlOneData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_8041F59C[];
extern char lbl_804D1220[];
extern char lbl_80534F78[];
void beMeterCtrlOneData_register();
void *beMeterCtrlOneData_getMetaCall();
}
extern "C" {
void fn_802CD9FC(){
 fn_80066188((int)beMeterCtrlOneData_register);
}
void beMeterCtrlOneData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534F78,(int)igNamedObject_register,(int)fn_80023CF4,(int)beMeterCtrlOneData_getMetaCall,(int)lbl_8041F59C,72,(int)beMeterCtrlOneData_vtableRead,(int)beMeterCtrlOneData_fieldInit,0,(int)lbl_804D1220);
}
void *beMeterCtrlOneData_getMetaCall(){return beMeterCtrlOneData_getMeta();}
}
#pragma pop
