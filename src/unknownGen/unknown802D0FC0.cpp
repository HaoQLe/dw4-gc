#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beMatCtrlData_fieldInit();
void *beMatCtrlData_getMeta();
void beMatCtrlData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beMatCtrlData_className[];
extern char lbl_804D1734[];
extern char beMatCtrlData_meta[];
void beMatCtrlData_register();
void *beMatCtrlData_getMetaCall();
}
extern "C" {
void beMatCtrlData_registerNow(){
 meta_registerNow((int)beMatCtrlData_register);
}
void beMatCtrlData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beMatCtrlData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beMatCtrlData_getMetaCall,(int)beMatCtrlData_className,16,(int)beMatCtrlData_vtableRead,(int)beMatCtrlData_fieldInit,0,(int)lbl_804D1734);
}
void *beMatCtrlData_getMetaCall(){return beMatCtrlData_getMeta();}
}
#pragma pop
