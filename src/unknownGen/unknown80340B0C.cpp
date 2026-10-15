#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beNDMWDegiData_fieldInit();
void *beNDMWDegiData_getMeta();
void beNDMWDegiData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_803250AC();
void igObject_register();
extern char beNDMWDegiData_className[];
extern char lbl_804E39A0[];
extern char beNDMWDegiData_meta[];
void beNDMWDegiData_register();
void *beNDMWDegiData_getMetaCall();
}
extern "C" {
void beNDMWDegiData_registerNow(){
 meta_registerNow((int)beNDMWDegiData_register);
}
void beNDMWDegiData_register(){
 fn_803250AC();
 meta_registerClass(0,(int)beNDMWDegiData_meta,(int)igObject_register,(int)fn_800237D0,(int)beNDMWDegiData_getMetaCall,(int)beNDMWDegiData_className,76,(int)beNDMWDegiData_vtableRead,(int)beNDMWDegiData_fieldInit,0,(int)lbl_804E39A0);
}
void *beNDMWDegiData_getMetaCall(){return beNDMWDegiData_getMeta();}
}
#pragma pop
