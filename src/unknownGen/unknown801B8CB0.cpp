#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igGeometry_register();
void igMultiResolutionMeshInstance_fieldInit();
void *igMultiResolutionMeshInstance_getMeta();
void igMultiResolutionMeshInstance_vtableRead();
extern char lbl_804AE20C[];
extern char lbl_804AE220[];
extern void *lbl_80564C54;
extern void *lbl_80564EF0;
void igMultiResolutionMeshInstance_register();
void *igMultiResolutionMeshInstance_getMetaCall();
void *fn_801B8D70();
}
extern "C" {
void fn_801B8CB0(){
 fn_80066188((int)igMultiResolutionMeshInstance_register);
}
void igMultiResolutionMeshInstance_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564C54,(int)igGeometry_register,(int)fn_801B8D70,(int)igMultiResolutionMeshInstance_getMetaCall,(int)lbl_804AE220,96,(int)igMultiResolutionMeshInstance_vtableRead,(int)igMultiResolutionMeshInstance_fieldInit,0,(int)lbl_804AE20C);
}
void *igMultiResolutionMeshInstance_getMetaCall(){return igMultiResolutionMeshInstance_getMeta();}
void *fn_801B8D70(){return lbl_80564EF0;}
}
#pragma pop
