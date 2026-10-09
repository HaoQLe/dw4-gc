#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C93C();
void igCollisionGrid_fieldInit();
void *igCollisionGrid_getMeta();
void igCollisionGrid_vtableRead();
void igObject_register();
extern char lbl_804CC904[];
extern char lbl_804CC914[];
extern void *lbl_80566118;
void igCollisionGrid_register();
void *igCollisionGrid_getMetaCall();
}
extern "C" {
void fn_8028DA5C(){
 fn_80066188((int)igCollisionGrid_register);
}
void igCollisionGrid_register(){
 fn_8028C93C();
 fn_80066204(0,(int)&lbl_80566118,(int)igObject_register,(int)fn_800237D0,(int)igCollisionGrid_getMetaCall,(int)lbl_804CC914,76,(int)igCollisionGrid_vtableRead,(int)igCollisionGrid_fieldInit,0,(int)lbl_804CC904);
}
void *igCollisionGrid_getMetaCall(){return igCollisionGrid_getMeta();}
}
#pragma pop
