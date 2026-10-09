#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWDegiData_fieldInit();
void *beNDMWDegiData_getMeta();
void beNDMWDegiData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char lbl_80454F24[];
extern char lbl_804E39A0[];
extern char lbl_80536634[];
void beNDMWDegiData_register();
void *beNDMWDegiData_getMetaCall();
}
extern "C" {
void fn_80340B0C(){
 fn_80066188((int)beNDMWDegiData_register);
}
void beNDMWDegiData_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80536634,(int)igObject_register,(int)fn_800237D0,(int)beNDMWDegiData_getMetaCall,(int)lbl_80454F24,76,(int)beNDMWDegiData_vtableRead,(int)beNDMWDegiData_fieldInit,0,(int)lbl_804E39A0);
}
void *beNDMWDegiData_getMetaCall(){return beNDMWDegiData_getMeta();}
}
#pragma pop
