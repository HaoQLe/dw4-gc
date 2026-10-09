#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B623C();
void *fn_801C0564();
void igAttrSet_register();
void igGeometry_fieldInit();
void *igGeometry_getMeta();
void igGeometry_vtableRead();
extern char lbl_804AF56C[];
extern char lbl_80560650[8];
extern void *lbl_80564EF0;
void igGeometry_register();
void *igGeometry_getMetaCall();
}
extern "C" {
void fn_801C0394(){
 fn_80066188((int)igGeometry_register);
}
void igGeometry_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564EF0,(int)igAttrSet_register,(int)fn_801B623C,(int)igGeometry_getMetaCall,(int)lbl_804AF56C,44,(int)igGeometry_vtableRead,(int)igGeometry_fieldInit,(int)fn_801C0564,(int)lbl_80560650);
}
void *igGeometry_getMetaCall(){return igGeometry_getMeta();}
}
#pragma pop
