#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWeaponAttachDataList_getMeta();
void beWeaponAttachDataList_vtableRead();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beWeaponAttachData_arkRegister();
void igObjectList_register();
extern char beWeaponAttachDataList_className[];
extern char beWeaponAttachDataList_dependencies[];
extern char beWeaponAttachDataList_meta[];
extern void *beWeaponAttachData_meta;
void beWeaponAttachDataList_register();
void *beWeaponAttachDataList_getMetaCall();
}
extern "C" {
void beWeaponAttachDataList_arkRegister(){
 meta_registerNow((int)beWeaponAttachDataList_register);
}
void beWeaponAttachDataList_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWeaponAttachDataList_meta,(int)igObjectList_register,(int)fn_80024180,(int)beWeaponAttachDataList_getMetaCall,(int)beWeaponAttachDataList_className,20,(int)beWeaponAttachDataList_vtableRead,0,0,(int)beWeaponAttachDataList_dependencies);
}
void *beWeaponAttachDataList_getMetaCall(){return beWeaponAttachDataList_getMeta();}
void *beWeaponAttachData_create(void *object){
 beWeaponAttachData_arkRegister();
 return meta_createInstance(beWeaponAttachData_meta,object);
}
void *beWeaponAttachData_getMeta(){
 if(!beWeaponAttachData_meta || !(reinterpret_cast<unsigned int *>(beWeaponAttachData_meta)[0x24/4]&4)) beWeaponAttachData_arkRegister();
 return beWeaponAttachData_meta;
}
}
#pragma pop
