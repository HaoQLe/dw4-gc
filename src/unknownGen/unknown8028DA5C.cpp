#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8028C93C();
void igCollisionGrid_fieldInit();
void *igCollisionGrid_getMeta();
void igCollisionGrid_vtableRead();
void igObject_register();
extern char igCollisionGrid_dependencies[];
extern char igCollisionGrid_className[];
extern void *igCollisionGrid_meta;
void igCollisionGrid_register();
void *igCollisionGrid_getMetaCall();
}
extern "C" {
void igCollisionGrid_arkRegister(){
 meta_registerNow((int)igCollisionGrid_register);
}
void igCollisionGrid_register(){
 fn_8028C93C();
 meta_registerClass(0,(int)&igCollisionGrid_meta,(int)igObject_register,(int)fn_800237D0,(int)igCollisionGrid_getMetaCall,(int)igCollisionGrid_className,76,(int)igCollisionGrid_vtableRead,(int)igCollisionGrid_fieldInit,0,(int)igCollisionGrid_dependencies);
}
void *igCollisionGrid_getMetaCall(){return igCollisionGrid_getMeta();}
}
#pragma pop
