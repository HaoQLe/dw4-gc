#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void igDefaultManager_fieldInit();
void *igDefaultManager_getMeta();
void igDefaultManager_vtableRead();
void igObject_register();
extern char lbl_8049F4B8[];
extern char igDefaultManager_className[];
extern void *igDefaultManager_meta;
void igDefaultManager_register();
void *igDefaultManager_getMetaCall();
}
extern "C" {
void igDefaultManager_registerNow(){
 meta_registerNow((int)igDefaultManager_register);
}
void igDefaultManager_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igDefaultManager_meta,(int)igObject_register,(int)fn_800237D0,(int)igDefaultManager_getMetaCall,(int)igDefaultManager_className,48,(int)igDefaultManager_vtableRead,(int)igDefaultManager_fieldInit,0,(int)lbl_8049F4B8);
}
void *igDefaultManager_getMetaCall(){return igDefaultManager_getMeta();}
}
#pragma pop
