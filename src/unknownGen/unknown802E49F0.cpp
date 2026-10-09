#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAsTargetModelData_fieldInit();
void *beAsTargetModelData_getMeta();
void beAsTargetModelData_vtableRead();
void *fn_80023CF4();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char lbl_80420E54[];
extern char lbl_804D2E84[];
extern char lbl_80535734[];
void beAsTargetModelData_register();
void *beAsTargetModelData_getMetaCall();
}
extern "C" {
void fn_802E49F0(){
 fn_80066188((int)beAsTargetModelData_register);
}
void beAsTargetModelData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80535734,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAsTargetModelData_getMetaCall,(int)lbl_80420E54,16,(int)beAsTargetModelData_vtableRead,(int)beAsTargetModelData_fieldInit,0,(int)lbl_804D2E84);
}
void *beAsTargetModelData_getMetaCall(){return beAsTargetModelData_getMeta();}
}
#pragma pop
