#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoManager_register();
void beWeapon_fieldInit();
void *beWeapon_getMeta();
void beWeapon_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
extern char lbl_8041CA74[];
extern char lbl_804CEE00[];
extern char lbl_8053455C[];
void beWeapon_register();
void *beWeapon_getMetaCall();
}
extern "C" {
void fn_802B3758(){
 fn_80066188((int)beWeapon_register);
}
void beWeapon_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053455C,(int)beBaseInfoManager_register,(int)fn_802B381C,(int)beWeapon_getMetaCall,(int)lbl_8041CA74,36,(int)beWeapon_vtableRead,(int)beWeapon_fieldInit,0,(int)lbl_804CEE00);
}
void *beWeapon_getMetaCall(){return beWeapon_getMeta();}
}
#pragma pop
