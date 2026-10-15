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
void beWeapon_arkRegister();
void igNamedObject_register();
extern char beWeaponSeqData_className[];
extern char lbl_8041CA68[];
extern char beWeaponSeqData_fieldTypes[];
extern char beWeaponSeqData_fieldNames[];
extern char beWeaponSeqData_fieldStorage[];
extern char beWeaponSeqData_fieldOffsets[];
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
void *fn_802B3370(){
 if(!lbl_80534558) lbl_80534558=fn_800635C8(lbl_8041CA68,lbl_804CEDE8,lbl_804CEDF4,0x3);
 return lbl_80534558;
}
}
#pragma pop
