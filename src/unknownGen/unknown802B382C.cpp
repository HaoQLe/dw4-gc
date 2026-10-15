#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void beWeaponAttachDataList_arkRegister();
extern char beWeapon_fieldTypes[];
extern char beWeapon_fieldNames[];
extern char beWeapon_fieldStorage[];
extern char beWeapon_fieldOffsets[];
extern void *beWeapon_meta;
extern void *beWeaponAttachDataList_meta;
extern void *lbl_805621F4;
void *beWeaponAttachDataList_metaObject();
}
extern "C" {
void beWeapon_fieldInit(){
 void *value0=beWeapon_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beWeapon_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beWeaponAttachDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beWeapon_fieldNames,beWeapon_fieldStorage,beWeapon_fieldOffsets,value1);
}
void *beWeaponAttachDataList_create(void *object){
 beWeaponAttachDataList_arkRegister();
 return meta_createInstance(beWeaponAttachDataList_meta,object);
}
void *beWeaponAttachDataList_metaObject(){
 if(!beWeaponAttachDataList_meta) beWeaponAttachDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWeaponAttachDataList_meta;
}
void *beWeaponAttachDataList_getMeta(){
 if(!beWeaponAttachDataList_meta || !(reinterpret_cast<unsigned int *>(beWeaponAttachDataList_meta)[0x24/4]&4)) beWeaponAttachDataList_arkRegister();
 return beWeaponAttachDataList_meta;
}
}
#pragma pop
