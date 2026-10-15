#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beWeaponSeqData_getMeta();
void beWeaponSeqData_vtableRead();
void *fn_80023CF4();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void beWeapon_registerNow();
void igNamedObject_register();
extern char beWeaponSeqData_className[];
extern char lbl_8041CA68[];
extern char lbl_804CEDD8[];
extern char lbl_804CEDDC[];
extern char lbl_804CEDE0[];
extern char lbl_804CEDE4[];
extern char lbl_804CEDE8[];
extern char lbl_804CEDF4[];
extern void *beWeaponSeqData_meta;
extern void *lbl_80534558;
extern void *beWeapon_meta;
extern void *lbl_805621F4;
void beWeaponSeqData_register();
void *beWeaponSeqData_getMetaCall();
void beWeaponSeqData_fieldInit();
}
extern "C" {
void beWeaponSeqData_registerNow(){
 meta_registerNow((int)beWeaponSeqData_register);
}
void beWeaponSeqData_register(){
 fn_802B1AC8();
 meta_registerClass(0,(int)&beWeaponSeqData_meta,(int)igNamedObject_register,(int)fn_80023CF4,(int)beWeaponSeqData_getMetaCall,(int)beWeaponSeqData_className,16,(int)beWeaponSeqData_vtableRead,(int)beWeaponSeqData_fieldInit,0,0);
}
void *beWeaponSeqData_getMetaCall(){return beWeaponSeqData_getMeta();}
void beWeaponSeqData_fieldInit(){
 void *meta=beWeaponSeqData_meta;
 void *field=meta_fieldCount(meta);
 meta_appendFields(meta,lbl_804CEDD8,0x1);
 meta_setupFields(meta,lbl_804CEDDC,lbl_804CEDE0,lbl_804CEDE4,field);
}
void *fn_802B3370(){
 if(!lbl_80534558) lbl_80534558=fn_800635C8(lbl_8041CA68,lbl_804CEDE8,lbl_804CEDF4,0x3);
 return lbl_80534558;
}
void *beWeapon_create(void *object){
 beWeapon_registerNow();
 return meta_createInstance(beWeapon_meta,object);
}
void *beWeapon_metaObject(){
 if(!beWeapon_meta) beWeapon_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWeapon_meta;
}
void *beWeapon_getMeta(){
 if(!beWeapon_meta || !(reinterpret_cast<unsigned int *>(beWeapon_meta)[0x24/4]&4)) beWeapon_registerNow();
 return beWeapon_meta;
}
}
#pragma pop
