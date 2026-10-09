#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beGeneraterInfoWork_fieldInit();
void *beGeneraterInfoWork_getMeta();
void beGeneraterInfoWork_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041FF7C[];
extern char lbl_804D1CE8[];
extern char lbl_80535258[];
void beGeneraterInfoWork_register();
void *beGeneraterInfoWork_getMetaCall();
}
extern "C" {
void fn_802D6B20(){
 fn_80066188((int)beGeneraterInfoWork_register);
}
void beGeneraterInfoWork_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535258,(int)igObject_register,(int)fn_800237D0,(int)beGeneraterInfoWork_getMetaCall,(int)lbl_8041FF7C,40,(int)beGeneraterInfoWork_vtableRead,(int)beGeneraterInfoWork_fieldInit,0,(int)lbl_804D1CE8);
}
void *beGeneraterInfoWork_getMetaCall(){return beGeneraterInfoWork_getMeta();}
}
#pragma pop
