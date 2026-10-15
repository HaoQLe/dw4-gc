#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igCompiledGraph_fieldInit();
void *igCompiledGraph_getMeta();
void igCompiledGraph_vtableRead();
void igGroup_register();
extern char igCompiledGraph_dependencies[];
extern char igCompiledGraph_className[];
extern void *igCompiledGraph_meta;
void igCompiledGraph_register();
void *igCompiledGraph_getMetaCall();
}
extern "C" {
void igCompiledGraph_arkRegister(){
 meta_registerNow((int)igCompiledGraph_register);
}
void igCompiledGraph_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCompiledGraph_meta,(int)igGroup_register,(int)fn_8011148C,(int)igCompiledGraph_getMetaCall,(int)igCompiledGraph_className,92,(int)igCompiledGraph_vtableRead,(int)igCompiledGraph_fieldInit,0,(int)igCompiledGraph_dependencies);
}
void *igCompiledGraph_getMetaCall(){return igCompiledGraph_getMeta();}
}
#pragma pop
