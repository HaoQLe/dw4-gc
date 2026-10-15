#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_register();
void igResource_fieldInit();
void *igResource_getMeta();
void igResource_vtableRead();
extern char igResource_dependencies[];
extern char igResource_className[];
extern void *igResource_meta;
void *igResource_getMetaCall();
}
extern "C" {
void igResource_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igResource_meta,(int)igObject_register,(int)fn_800237D0,(int)igResource_getMetaCall,(int)igResource_className,76,(int)igResource_vtableRead,(int)igResource_fieldInit,0,(int)igResource_dependencies);
}
void *igResource_getMetaCall(){return igResource_getMeta();}
}
#pragma pop
