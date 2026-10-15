#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMeterCtrlOneData_fieldInit();
void *beMeterCtrlOneData_getMeta();
void beMeterCtrlOneData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beMeterCtrlOneData_className[];
extern char beMeterCtrlOneData_dependencies[];
extern char beMeterCtrlOneData_meta[];
void beMeterCtrlOneData_register();
void *beMeterCtrlOneData_getMetaCall();
}
extern "C" {
void beMeterCtrlOneData_arkRegister(){
 meta_registerNow((int)beMeterCtrlOneData_register);
}
void beMeterCtrlOneData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMeterCtrlOneData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beMeterCtrlOneData_getMetaCall,(int)beMeterCtrlOneData_className,72,(int)beMeterCtrlOneData_vtableRead,(int)beMeterCtrlOneData_fieldInit,0,(int)beMeterCtrlOneData_dependencies);
}
void *beMeterCtrlOneData_getMetaCall(){return beMeterCtrlOneData_getMeta();}
}
#pragma pop
