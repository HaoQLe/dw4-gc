#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *fn_800658E4(void *,void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void beWeaponAttachDataList_registerNow();
extern char lbl_804CEE08[];
extern char lbl_804CEE0C[];
extern char lbl_804CEE10[];
extern char lbl_804CEE14[];
extern void *beWeapon_meta;
extern void *beWeaponAttachDataList_meta;
extern void *lbl_805621F4;
void *beWeaponAttachDataList_metaObject();
}
extern "C" {
void beWeapon_fieldInit(){
 void *value0=beWeapon_meta;
 void *value1=fn_80065D88(value0);
 fn_80065924(value0,lbl_804CEE08,1);
 void *value2=fn_800658E4(value0,value1);
 void *value3=beWeaponAttachDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 fn_800659C0(value0,lbl_804CEE0C,lbl_804CEE10,lbl_804CEE14,value1);
}
void *beWeaponAttachDataList_create(void *object){
 beWeaponAttachDataList_registerNow();
 return meta_createInstance(beWeaponAttachDataList_meta,object);
}
void *beWeaponAttachDataList_metaObject(){
 if(!beWeaponAttachDataList_meta) beWeaponAttachDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return beWeaponAttachDataList_meta;
}
void *beWeaponAttachDataList_getMeta(){
 if(!beWeaponAttachDataList_meta || !(reinterpret_cast<unsigned int *>(beWeaponAttachDataList_meta)[0x24/4]&4)) beWeaponAttachDataList_registerNow();
 return beWeaponAttachDataList_meta;
}
}
#pragma pop
