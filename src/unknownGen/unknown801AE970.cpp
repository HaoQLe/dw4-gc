#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_801AA6DC();
void igObject_register();
void igSorter_fieldInit();
void *igSorter_getMeta();
void igSorter_vtableRead();
extern char igSorter_dependencies[];
extern char igSorter_className[];
extern void *igSorter_meta;
void igSorter_register();
void *igSorter_getMetaCall();
}
extern "C" {
void igSorter_arkRegister(){
 meta_registerNow((int)igSorter_register);
}
void igSorter_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igSorter_meta,(int)igObject_register,(int)fn_800237D0,(int)igSorter_getMetaCall,(int)igSorter_className,132,(int)igSorter_vtableRead,(int)igSorter_fieldInit,0,(int)igSorter_dependencies);
}
void *igSorter_getMetaCall(){return igSorter_getMeta();}
}
#pragma pop
