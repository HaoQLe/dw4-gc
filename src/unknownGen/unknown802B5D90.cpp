#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beTimerData_fieldInit();
void *beTimerData_getMeta();
void beTimerData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beTimerData_className[];
extern char beTimerData_meta[];
void beTimerData_register();
void *beTimerData_getMetaCall();
}
extern "C" {
void beTimerData_arkRegister(){
 meta_registerNow((int)beTimerData_register);
}
void beTimerData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beTimerData_meta,(int)igObject_register,(int)fn_800237D0,(int)beTimerData_getMetaCall,(int)beTimerData_className,32,(int)beTimerData_vtableRead,(int)beTimerData_fieldInit,0,0);
}
void *beTimerData_getMetaCall(){return beTimerData_getMeta();}
}
#pragma pop
