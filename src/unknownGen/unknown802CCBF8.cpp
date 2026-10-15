#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beModelCtrlData_fieldInit();
void *beModelCtrlData_getMeta();
void beModelCtrlData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beModelCtrlData_className[];
extern char lbl_804D106C[];
extern char beModelCtrlData_meta[];
void beModelCtrlData_register();
void *beModelCtrlData_getMetaCall();
}
extern "C" {
void beModelCtrlData_registerNow(){
 meta_registerNow((int)beModelCtrlData_register);
}
void beModelCtrlData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beModelCtrlData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beModelCtrlData_getMetaCall,(int)beModelCtrlData_className,16,(int)beModelCtrlData_vtableRead,(int)beModelCtrlData_fieldInit,0,(int)lbl_804D106C);
}
void *beModelCtrlData_getMetaCall(){return beModelCtrlData_getMeta();}
}
#pragma pop
