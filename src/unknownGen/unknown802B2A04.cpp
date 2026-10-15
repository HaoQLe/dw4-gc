#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void beBaseInfoRam_register();
void *beWeaponInfoRam_getMeta();
void beWeaponInfoRam_vtableRead();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B2B2C();
extern char beWeaponInfoRam_className[];
extern char beWeaponInfoRam_meta[];
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
  if(flags>0) __dl__FPv(object);
 }
 return object;
}
void beWeaponInfoRam_registerNow(){
 meta_registerNow((int)beWeaponInfoRam_register);
}
void beWeaponInfoRam_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)beWeaponInfoRam_meta,(int)beBaseInfoRam_register,(int)fn_802B2B2C,(int)beWeaponInfoRam_getMetaCall,(int)beWeaponInfoRam_className,44,(int)beWeaponInfoRam_vtableRead,0,0,0);
}
void *beWeaponInfoRam_getMetaCall(){return beWeaponInfoRam_getMeta();}
}
#pragma pop
