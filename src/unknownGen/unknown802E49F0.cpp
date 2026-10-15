#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beAsTargetModelData_fieldInit();
void *beAsTargetModelData_getMeta();
void beAsTargetModelData_vtableRead();
void *fn_80023CF4();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igNamedObject_register();
extern char beAsTargetModelData_className[];
extern char beAsTargetModelData_dependencies[];
extern char beAsTargetModelData_meta[];
void beAsTargetModelData_register();
void *beAsTargetModelData_getMetaCall();
}
extern "C" {
void beAsTargetModelData_arkRegister(){
 meta_registerNow((int)beAsTargetModelData_register);
}
void beAsTargetModelData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beAsTargetModelData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAsTargetModelData_getMetaCall,(int)beAsTargetModelData_className,16,(int)beAsTargetModelData_vtableRead,(int)beAsTargetModelData_fieldInit,0,(int)beAsTargetModelData_dependencies);
}
void *beAsTargetModelData_getMetaCall(){return beAsTargetModelData_getMeta();}
}
#pragma pop
