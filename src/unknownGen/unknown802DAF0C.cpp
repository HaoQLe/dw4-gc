#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beFileChkObj_fieldInit();
void *beFileChkObj_getMeta();
void beFileChkObj_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_804204D4[];
extern char lbl_804D22C8[];
extern char lbl_805353DC[];
void beFileChkObj_register();
void *beFileChkObj_getMetaCall();
}
extern "C" {
void fn_802DAF0C(){
 fn_80066188((int)beFileChkObj_register);
}
void beFileChkObj_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805353DC,(int)igObject_register,(int)fn_800237D0,(int)beFileChkObj_getMetaCall,(int)lbl_804204D4,12,(int)beFileChkObj_vtableRead,(int)beFileChkObj_fieldInit,0,(int)lbl_804D22C8);
}
void *beFileChkObj_getMetaCall(){return beFileChkObj_getMeta();}
}
#pragma pop
