#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *igAppearanceListList_metaObject();
void *igModelViewMatrixBoneSelectList_80534578_metaObject();
extern char beWeaponAttachData_fieldTypes[];
extern char beWeaponAttachData_fieldNames[];
extern char beWeaponAttachData_fieldStorage[];
extern char beWeaponAttachData_fieldOffsets[];
extern void *beWeaponAttachData_meta;
}
extern "C" {
void beWeaponAttachData_fieldInit(){
 void *value0=beWeaponAttachData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beWeaponAttachData_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=igModelViewMatrixBoneSelectList_80534578_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=igAppearanceListList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,beWeaponAttachData_fieldNames,beWeaponAttachData_fieldStorage,beWeaponAttachData_fieldOffsets,value1);
}
}
#pragma pop
