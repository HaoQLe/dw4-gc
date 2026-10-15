#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void fn_801C838C();
void igAttrStackManager_fieldInit();
void *igAttrStackManager_getMeta();
void igAttrStackManager_vtableRead();
void igObject_register();
extern char igAttrStackManager_dependencies[];
extern char igAttrStackManager_className[];
extern void *igAttrStackManager_meta;
void igAttrStackManager_register();
void *igAttrStackManager_getMetaCall();
}
extern "C" {
void igAttrStackManager_arkRegister(){
 meta_registerNow((int)igAttrStackManager_register);
}
void igAttrStackManager_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igAttrStackManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igAttrStackManager_getMetaCall,(int)igAttrStackManager_className,76,(int)igAttrStackManager_vtableRead,(int)igAttrStackManager_fieldInit,(int)fn_801C838C,(int)igAttrStackManager_dependencies);
}
void *igAttrStackManager_getMetaCall(){return igAttrStackManager_getMeta();}
}
#pragma pop
