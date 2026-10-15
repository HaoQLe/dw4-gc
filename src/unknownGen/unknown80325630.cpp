#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_802AD8A0();
void fn_803250AC();
void igInsightPlugin_register();
extern char libNdmwRuntimePlugin_className[];
extern char lbl_804E1500[];
extern char libNdmwRuntimePlugin_meta[];
void libNdmwRuntimePlugin_fieldInit();
void *libNdmwRuntimePlugin_getMeta();
void libNdmwRuntimePlugin_vtableRead();
void libNdmwRuntimePlugin_register();
void *libNdmwRuntimePlugin_getMetaCall();
}
extern "C" {
void libNdmwRuntimePlugin_registerNow(){
 meta_registerNow((int)libNdmwRuntimePlugin_register);
}
void libNdmwRuntimePlugin_register(){
 fn_803250AC();
 meta_registerClass(0,(int)libNdmwRuntimePlugin_meta,(int)igInsightPlugin_register,(int)fn_802AD8A0,(int)libNdmwRuntimePlugin_getMetaCall,(int)libNdmwRuntimePlugin_className,92,(int)libNdmwRuntimePlugin_vtableRead,(int)libNdmwRuntimePlugin_fieldInit,0,(int)lbl_804E1500);
}
void *libNdmwRuntimePlugin_getMetaCall(){return libNdmwRuntimePlugin_getMeta();}
}
#pragma pop
