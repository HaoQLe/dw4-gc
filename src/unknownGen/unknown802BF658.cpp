#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSvPlatBaseData_fieldInit();
void *beSvPlatBaseData_getMeta();
void beSvPlatBaseData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E1F8[];
extern char lbl_804CFD84[];
extern char lbl_805349A4[];
void beSvPlatBaseData_register();
void *beSvPlatBaseData_getMetaCall();
}
extern "C" {
void fn_802BF658(){
 fn_80066188((int)beSvPlatBaseData_register);
}
void beSvPlatBaseData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349A4,(int)igObject_register,(int)fn_800237D0,(int)beSvPlatBaseData_getMetaCall,(int)lbl_8041E1F8,24,(int)beSvPlatBaseData_vtableRead,(int)beSvPlatBaseData_fieldInit,0,(int)lbl_804CFD84);
}
void *beSvPlatBaseData_getMetaCall(){return beSvPlatBaseData_getMeta();}
}
#pragma pop
