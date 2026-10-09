#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlSubCom_fieldInit();
void *beModelCtrlSubCom_getMeta();
void beModelCtrlSubCom_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E950[];
extern char lbl_804D05B0[];
extern char lbl_80534BF0[];
void beModelCtrlSubCom_register();
void *beModelCtrlSubCom_getMetaCall();
}
extern "C" {
void fn_802C53C0(){
 fn_80066188((int)beModelCtrlSubCom_register);
}
void beModelCtrlSubCom_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534BF0,(int)igObject_register,(int)fn_800237D0,(int)beModelCtrlSubCom_getMetaCall,(int)lbl_8041E950,12,(int)beModelCtrlSubCom_vtableRead,(int)beModelCtrlSubCom_fieldInit,0,(int)lbl_804D05B0);
}
void *beModelCtrlSubCom_getMetaCall(){return beModelCtrlSubCom_getMeta();}
}
#pragma pop
