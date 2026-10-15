#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWeaponAttachData_fieldInit();
void *beWeaponAttachData_getMeta();
void beWeaponAttachData_vtableRead();
void *fn_800237D0();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char beWeaponAttachData_className[];
extern char beWeaponAttachData_dependencies[];
extern char beWeaponAttachData_meta[];
void beWeaponAttachData_register();
void *beWeaponAttachData_getMetaCall();
}
extern "C" {
void beWeaponAttachData_arkRegister(){
 meta_registerNow((int)beWeaponAttachData_register);
}
void beWeaponAttachData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWeaponAttachData_meta,(int)igObject_register,(int)fn_800237D0,(int)beWeaponAttachData_getMetaCall,(int)beWeaponAttachData_className,16,(int)beWeaponAttachData_vtableRead,(int)beWeaponAttachData_fieldInit,0,(int)beWeaponAttachData_dependencies);
}
void *beWeaponAttachData_getMetaCall(){return beWeaponAttachData_getMeta();}
}
#pragma pop
