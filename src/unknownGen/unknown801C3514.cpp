#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void *fn_8011148C();
void fn_801AA6DC();
void igCompiledGraph_fieldInit();
void *igCompiledGraph_getMeta();
void igCompiledGraph_vtableRead();
void igGroup_register();
extern char lbl_804B021C[];
extern char lbl_804B0240[];
extern void *lbl_8056506C;
void igCompiledGraph_register();
void *igCompiledGraph_getMetaCall();
}
extern "C" {
void fn_801C3514(){
 fn_80066188((int)igCompiledGraph_register);
}
void igCompiledGraph_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_8056506C,(int)igGroup_register,(int)fn_8011148C,(int)igCompiledGraph_getMetaCall,(int)lbl_804B0240,92,(int)igCompiledGraph_vtableRead,(int)igCompiledGraph_fieldInit,0,(int)lbl_804B021C);
}
void *igCompiledGraph_getMetaCall(){return igCompiledGraph_getMeta();}
}
#pragma pop
