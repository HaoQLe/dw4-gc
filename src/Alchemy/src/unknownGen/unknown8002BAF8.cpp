#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igInfo_register();
void igMemoryPoolInfo_fieldInit();
void *igMemoryPoolInfo_getMeta();
void igMemoryPoolInfo_vtableRead();
extern char igMemoryPoolInfo_className[];
extern void *igMemoryPoolInfo_meta;
void igMemoryPoolInfo_register();
void *igMemoryPoolInfo_getMetaCall();
}
extern "C" {
void igMemoryPoolInfo_registerNow(){
 meta_registerNow((int)igMemoryPoolInfo_register);
}
void igMemoryPoolInfo_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igMemoryPoolInfo_meta,(int)igInfo_register,(int)fn_800284EC,(int)igMemoryPoolInfo_getMetaCall,(int)igMemoryPoolInfo_className,84,(int)igMemoryPoolInfo_vtableRead,(int)igMemoryPoolInfo_fieldInit,0,0);
}
void *igMemoryPoolInfo_getMetaCall(){return igMemoryPoolInfo_getMeta();}
}
#pragma pop
