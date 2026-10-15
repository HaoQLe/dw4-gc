#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beSaveMemoryObj_fieldInit();
void *beSaveMemoryObj_getMeta();
void beSaveMemoryObj_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beSaveMemoryObj_className[];
extern char beSaveMemoryObj_meta[];
void beSaveMemoryObj_register();
void *beSaveMemoryObj_getMetaCall();
}
extern "C" {
void beSaveMemoryObj_registerNow(){
 meta_registerNow((int)beSaveMemoryObj_register);
}
void beSaveMemoryObj_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beSaveMemoryObj_meta,(int)igObject_register,(int)fn_800237D0,(int)beSaveMemoryObj_getMetaCall,(int)beSaveMemoryObj_className,12,(int)beSaveMemoryObj_vtableRead,(int)beSaveMemoryObj_fieldInit,0,0);
}
void *beSaveMemoryObj_getMetaCall(){return beSaveMemoryObj_getMeta();}
}
#pragma pop
