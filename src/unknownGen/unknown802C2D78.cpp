#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNumberCtrlInfoWork_fieldInit();
void *beNumberCtrlInfoWork_getMeta();
void beNumberCtrlInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E6E0[];
extern char lbl_80534B38[];
void beNumberCtrlInfoWork_register();
void *beNumberCtrlInfoWork_getMetaCall();
}
extern "C" {
void fn_802C2D78(){
 fn_80066188((int)beNumberCtrlInfoWork_register);
}
void beNumberCtrlInfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534B38,(int)igObject_register,(int)fn_800237D0,(int)beNumberCtrlInfoWork_getMetaCall,(int)lbl_8041E6E0,20,(int)beNumberCtrlInfoWork_vtableRead,(int)beNumberCtrlInfoWork_fieldInit,0,0);
}
void *beNumberCtrlInfoWork_getMetaCall(){return beNumberCtrlInfoWork_getMeta();}
}
#pragma pop
