#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWaterMoveData_fieldInit();
void *beWaterMoveData_getMeta();
void beWaterMoveData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041CCC4[];
extern char lbl_804CF084[];
extern char lbl_80534608[];
void beWaterMoveData_register();
void *beWaterMoveData_getMetaCall();
}
extern "C" {
void fn_802B4A88(){
 fn_80066188((int)beWaterMoveData_register);
}
void beWaterMoveData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534608,(int)igObject_register,(int)fn_800237D0,(int)beWaterMoveData_getMetaCall,(int)lbl_8041CCC4,24,(int)beWaterMoveData_vtableRead,(int)beWaterMoveData_fieldInit,0,(int)lbl_804CF084);
}
void *beWaterMoveData_getMetaCall(){return beWaterMoveData_getMeta();}
}
#pragma pop
