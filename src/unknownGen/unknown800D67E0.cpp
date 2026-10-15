#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_800CE2F8();
void *fn_800D67E8();
void *igGamecubeVisualContext_getMetaCall();
void igGamecubeVisualContext_vtableRead();
void igVisualContext_register();
extern char igGamecubeVisualContext_dependencies[];
extern char igGamecubeVisualContext_className[];
extern void *igVisualContext_meta;
extern void *igGamecubeVisualContext_meta;
void igGamecubeVisualContext_register();
void *igGamecubeVisualContext_parentMeta();
}
extern "C" {
void *igGamecubeVisualContext_parentMeta(){return igVisualContext_meta;}
}
#pragma pop
