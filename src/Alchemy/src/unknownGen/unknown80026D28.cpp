#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igObject_register();
void igRegistry_fieldInit();
void *igRegistry_getMeta();
void igRegistry_vtableRead();
extern char lbl_80463DA4[];
extern char lbl_80463DB4[];
extern void *lbl_80561658;
void *igRegistry_getMetaCall();
}
extern "C" {
void igRegistry_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561658,(int)igObject_register,(int)fn_800237D0,(int)igRegistry_getMetaCall,(int)lbl_80463DB4,24,(int)igRegistry_vtableRead,(int)igRegistry_fieldInit,0,(int)lbl_80463DA4);
}
void *igRegistry_getMetaCall(){return igRegistry_getMeta();}
}
#pragma pop
