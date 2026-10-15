#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beWeapon_fieldInit();
void *beWeapon_getMeta();
void beWeapon_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char beWeapon_className[];
extern char beWeapon_dependencies[];
extern char beWeapon_meta[];
void beWeapon_register();
void *beWeapon_getMetaCall();
}
extern "C" {
void beWeapon_arkRegister(){
 meta_registerNow((int)beWeapon_register);
}
void beWeapon_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWeapon_meta,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beWeapon_getMetaCall,(int)beWeapon_className,36,(int)beWeapon_vtableRead,(int)beWeapon_fieldInit,0,(int)beWeapon_dependencies);
}
void *beWeapon_getMetaCall(){return beWeapon_getMeta();}
}
#pragma pop
