#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveMemoryObj_fieldInit();
void *beSaveMemoryObj_getMeta();
void beSaveMemoryObj_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041E2C4[];
extern char lbl_805349F0[];
void beSaveMemoryObj_register();
void *beSaveMemoryObj_getMetaCall();
}
extern "C" {
void fn_802C012C(){
 fn_80066188((int)beSaveMemoryObj_register);
}
void beSaveMemoryObj_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805349F0,(int)igObject_register,(int)fn_800237D0,(int)beSaveMemoryObj_getMetaCall,(int)lbl_8041E2C4,12,(int)beSaveMemoryObj_vtableRead,(int)beSaveMemoryObj_fieldInit,0,0);
}
void *beSaveMemoryObj_getMetaCall(){return beSaveMemoryObj_getMeta();}
}
#pragma pop
