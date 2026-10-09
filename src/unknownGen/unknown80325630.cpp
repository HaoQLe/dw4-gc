#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802AD8A0();
void fn_803250AC();
void igInsightPlugin_register();
extern char lbl_804530B0[];
extern char lbl_804E1500[];
extern char lbl_80535C20[];
void libNdmwRuntimePlugin_fieldInit();
void *libNdmwRuntimePlugin_getMeta();
void libNdmwRuntimePlugin_vtableRead();
void libNdmwRuntimePlugin_register();
void *libNdmwRuntimePlugin_getMetaCall();
}
extern "C" {
void fn_80325630(){
 fn_80066188((int)libNdmwRuntimePlugin_register);
}
void libNdmwRuntimePlugin_register(){
 fn_803250AC();
 fn_80066204(0,(int)lbl_80535C20,(int)igInsightPlugin_register,(int)fn_802AD8A0,(int)libNdmwRuntimePlugin_getMetaCall,(int)lbl_804530B0,92,(int)libNdmwRuntimePlugin_vtableRead,(int)libNdmwRuntimePlugin_fieldInit,0,(int)lbl_804E1500);
}
void *libNdmwRuntimePlugin_getMetaCall(){return libNdmwRuntimePlugin_getMeta();}
}
#pragma pop
