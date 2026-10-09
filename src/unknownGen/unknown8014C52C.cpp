#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void igDefaultManager_fieldInit();
void *igDefaultManager_getMeta();
void igDefaultManager_vtableRead();
void igObject_register();
extern char lbl_8049F4B8[];
extern char lbl_8049F4E4[];
extern void *lbl_80564374;
void igDefaultManager_register();
void *igDefaultManager_getMetaCall();
}
extern "C" {
void fn_8014C52C(){
 fn_80066188((int)igDefaultManager_register);
}
void igDefaultManager_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80564374,(int)igObject_register,(int)fn_800237D0,(int)igDefaultManager_getMetaCall,(int)lbl_8049F4E4,48,(int)igDefaultManager_vtableRead,(int)igDefaultManager_fieldInit,0,(int)lbl_8049F4B8);
}
void *igDefaultManager_getMetaCall(){return igDefaultManager_getMeta();}
}
#pragma pop
