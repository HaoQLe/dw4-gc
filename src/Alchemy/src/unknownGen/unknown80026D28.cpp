#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_register();
void igRegistry_fieldInit();
void *igRegistry_getMeta();
void igRegistry_vtableRead();
extern char igRegistry_dependencies[];
extern char igRegistry_className[];
extern void *igRegistry_meta;
void *igRegistry_getMetaCall();
}
extern "C" {
void igRegistry_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igRegistry_meta,(int)igObject_register,(int)fn_800237D0,(int)igRegistry_getMetaCall,(int)igRegistry_className,24,(int)igRegistry_vtableRead,(int)igRegistry_fieldInit,0,(int)igRegistry_dependencies);
}
void *igRegistry_getMetaCall(){return igRegistry_getMeta();}
}
#pragma pop
