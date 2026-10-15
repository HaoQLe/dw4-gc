#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void bePadData_fieldInit();
void *bePadData_getMeta();
void bePadData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char bePadData_className[];
extern char bePadData_meta[];
void bePadData_register();
void *bePadData_getMetaCall();
}
extern "C" {
void bePadData_arkRegister(){
 meta_registerNow((int)bePadData_register);
}
void bePadData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)bePadData_meta,(int)igObject_register,(int)fn_800237D0,(int)bePadData_getMetaCall,(int)bePadData_className,104,(int)bePadData_vtableRead,(int)bePadData_fieldInit,0,0);
}
void *bePadData_getMetaCall(){return bePadData_getMeta();}
}
#pragma pop
