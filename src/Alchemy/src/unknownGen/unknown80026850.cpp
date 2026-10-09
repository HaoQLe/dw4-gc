#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igObject_register();
void igResource_fieldInit();
void *igResource_getMeta();
void igResource_vtableRead();
extern char lbl_80463B18[];
extern char lbl_80463B38[];
extern void *lbl_80561610;
void *igResource_getMetaCall();
}
extern "C" {
void igResource_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561610,(int)igObject_register,(int)fn_800237D0,(int)igResource_getMetaCall,(int)lbl_80463B38,76,(int)igResource_vtableRead,(int)igResource_fieldInit,0,(int)lbl_80463B18);
}
void *igResource_getMetaCall(){return igResource_getMeta();}
}
#pragma pop
