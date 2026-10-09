#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfo_register();
void beWeaponInfo_fieldInit();
void *beWeaponInfo_getMeta();
void beWeaponInfo_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2E3C();
extern char lbl_8041C9E0[];
extern char lbl_804CED90[];
extern char lbl_8053453C[];
void beWeaponInfo_register();
void *beWeaponInfo_getMetaCall();
}
extern "C" {
void fn_802B2D78(){
 fn_80066188((int)beWeaponInfo_register);
}
void beWeaponInfo_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_8053453C,(int)beBaseInfo_register,(int)fn_802B2E3C,(int)beWeaponInfo_getMetaCall,(int)lbl_8041C9E0,40,(int)beWeaponInfo_vtableRead,(int)beWeaponInfo_fieldInit,0,(int)lbl_804CED90);
}
void *beWeaponInfo_getMetaCall(){return beWeaponInfo_getMeta();}
}
#pragma pop
