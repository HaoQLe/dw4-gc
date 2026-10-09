#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C838C();
void igAttrStackManager_fieldInit();
void *igAttrStackManager_getMeta();
void igAttrStackManager_vtableRead();
void igObject_register();
extern char lbl_804B15B0[];
extern char lbl_804B15D4[];
extern void *lbl_80565304;
void igAttrStackManager_register();
void *igAttrStackManager_getMetaCall();
}
extern "C" {
void fn_801C80D4(){
 fn_80066188((int)igAttrStackManager_register);
}
void igAttrStackManager_register(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_80565304,(int)igObject_register,(int)fn_800237D0,(int)igAttrStackManager_getMetaCall,(int)lbl_804B15D4,76,(int)igAttrStackManager_vtableRead,(int)igAttrStackManager_fieldInit,(int)fn_801C838C,(int)lbl_804B15B0);
}
void *igAttrStackManager_getMetaCall(){return igAttrStackManager_getMeta();}
}
#pragma pop
