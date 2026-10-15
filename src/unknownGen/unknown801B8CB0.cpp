#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igGeometry_register();
void igMultiResolutionMeshInstance_fieldInit();
void *igMultiResolutionMeshInstance_getMeta();
void igMultiResolutionMeshInstance_vtableRead();
extern char igMultiResolutionMeshInstance_dependencies[];
extern char igMultiResolutionMeshInstance_className[];
extern void *igMultiResolutionMeshInstance_meta;
extern void *igGeometry_meta;
void igMultiResolutionMeshInstance_register();
void *igMultiResolutionMeshInstance_getMetaCall();
void *fn_801B8D70();
}
extern "C" {
void igMultiResolutionMeshInstance_arkRegister(){
 meta_registerNow((int)igMultiResolutionMeshInstance_register);
}
void igMultiResolutionMeshInstance_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igMultiResolutionMeshInstance_meta,(int)igGeometry_register,(int)fn_801B8D70,(int)igMultiResolutionMeshInstance_getMetaCall,(int)igMultiResolutionMeshInstance_className,96,(int)igMultiResolutionMeshInstance_vtableRead,(int)igMultiResolutionMeshInstance_fieldInit,0,(int)igMultiResolutionMeshInstance_dependencies);
}
void *igMultiResolutionMeshInstance_getMetaCall(){return igMultiResolutionMeshInstance_getMeta();}
void *fn_801B8D70(){return igGeometry_meta;}
}
#pragma pop
