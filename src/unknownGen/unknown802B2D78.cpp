#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beWeaponInfo_fieldInit();
void *beWeaponInfo_getMeta();
void beWeaponInfo_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char beWeaponInfo_className[];
extern char beWeaponInfo_dependencies[];
extern char beWeaponInfo_meta[];
void beWeaponInfo_register();
void *beWeaponInfo_getMetaCall();
}
extern "C" {
void beWeaponInfo_arkRegister(){
 meta_registerNow((int)beWeaponInfo_register);
}
void beWeaponInfo_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWeaponInfo_meta,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beWeaponInfo_getMetaCall,(int)beWeaponInfo_className,40,(int)beWeaponInfo_vtableRead,(int)beWeaponInfo_fieldInit,0,(int)beWeaponInfo_dependencies);
}
void *beWeaponInfo_getMetaCall(){return beWeaponInfo_getMeta();}
}
#pragma pop
