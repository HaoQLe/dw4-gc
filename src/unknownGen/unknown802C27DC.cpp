#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void bePadData_fieldInit();
void *bePadData_getMeta();
void bePadData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E5E8[];
extern char lbl_80534AC8[];
void bePadData_register();
void *bePadData_getMetaCall();
}
extern "C" {
void fn_802C27DC(){
 fn_80066188((int)bePadData_register);
}
void bePadData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534AC8,(int)igObject_register,(int)fn_800237D0,(int)bePadData_getMetaCall,(int)lbl_8041E5E8,104,(int)bePadData_vtableRead,(int)bePadData_fieldInit,0,0);
}
void *bePadData_getMetaCall(){return bePadData_getMeta();}
}
#pragma pop
