#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void *fn_801B8D70();
void igGeometry_register();
void igMorphInstance2_fieldInit();
void *igMorphInstance2_getMeta();
void igMorphInstance2_vtableRead();
extern char lbl_804AE900[];
extern char lbl_804AE914[];
extern void *lbl_80564D0C;
void igMorphInstance2_register();
void *igMorphInstance2_getMetaCall();
}
extern "C" {
void fn_801B9E18(){
 fn_80066188((int)igMorphInstance2_register);
}
void igMorphInstance2_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80564D0C,(int)igGeometry_register,(int)fn_801B8D70,(int)igMorphInstance2_getMetaCall,(int)lbl_804AE914,60,(int)igMorphInstance2_vtableRead,(int)igMorphInstance2_fieldInit,0,(int)lbl_804AE900);
}
void *igMorphInstance2_getMetaCall(){return igMorphInstance2_getMeta();}
}
#pragma pop
