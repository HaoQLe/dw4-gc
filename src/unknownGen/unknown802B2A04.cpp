#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void beBaseInfoRam_register();
void *beWeaponInfoRam_getMeta();
void beWeaponInfoRam_vtableRead();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_800A325C(void *);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char lbl_8041C9D0[];
extern char lbl_80534538[];
void beWeaponInfoRam_register();
void *beWeaponInfoRam_getMetaCall();
}
extern "C" {
UnknownGenHolder *dtor_802B2A04(UnknownGenHolder *object,short flags){
 if(object){
  UnknownGenValue *value=object->unknown00;
  if(value){
   --value->unknown04;
   if(!(reinterpret_cast<volatile unsigned int *>(value)[1]&0x7FFFFF)) fn_80066E1C(value);
  }
  if(flags>0) fn_800A325C(object);
 }
 return object;
}
void fn_802B2A78(){
 fn_80066188((int)beWeaponInfoRam_register);
}
void beWeaponInfoRam_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534538,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beWeaponInfoRam_getMetaCall,(int)lbl_8041C9D0,44,(int)beWeaponInfoRam_vtableRead,0,0,0);
}
void *beWeaponInfoRam_getMetaCall(){return beWeaponInfoRam_getMeta();}
}
#pragma pop
