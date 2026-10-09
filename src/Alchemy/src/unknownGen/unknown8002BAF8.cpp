#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void igInfo_register();
void igMemoryPoolInfo_fieldInit();
void *igMemoryPoolInfo_getMeta();
void igMemoryPoolInfo_vtableRead();
extern char lbl_80464B1C[];
extern void *lbl_80561858;
void igMemoryPoolInfo_register();
void *igMemoryPoolInfo_getMetaCall();
}
extern "C" {
void fn_8002BAF8(){
 fn_80066188((int)igMemoryPoolInfo_register);
}
void igMemoryPoolInfo_register(){
 fn_80021B94();
 fn_80066204(0,(int)&lbl_80561858,(int)igInfo_register,(int)fn_800284EC,(int)igMemoryPoolInfo_getMetaCall,(int)lbl_80464B1C,84,(int)igMemoryPoolInfo_vtableRead,(int)igMemoryPoolInfo_fieldInit,0,0);
}
void *igMemoryPoolInfo_getMetaCall(){return igMemoryPoolInfo_getMeta();}
}
#pragma pop
