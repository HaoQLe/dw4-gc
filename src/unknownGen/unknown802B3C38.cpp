#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beWeaponAttachData_fieldInit();
void *beWeaponAttachData_getMeta();
void beWeaponAttachData_vtableRead();
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void igObject_register();
extern char lbl_8041CAA8[];
extern char lbl_804CEE20[];
extern char lbl_80534568[];
void beWeaponAttachData_register();
void *beWeaponAttachData_getMetaCall();
}
extern "C" {
void fn_802B3C38(){
 fn_80066188((int)beWeaponAttachData_register);
}
void beWeaponAttachData_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534568,(int)igObject_register,(int)fn_800237D0,(int)beWeaponAttachData_getMetaCall,(int)lbl_8041CAA8,16,(int)beWeaponAttachData_vtableRead,(int)beWeaponAttachData_fieldInit,0,(int)lbl_804CEE20);
}
void *beWeaponAttachData_getMetaCall(){return beWeaponAttachData_getMeta();}
}
#pragma pop
