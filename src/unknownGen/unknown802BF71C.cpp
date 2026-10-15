#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beSvSlotDataList_metaObject();
extern char beSvPlatBaseData_fieldTypes[];
extern char beSvPlatBaseData_fieldNames[];
extern char beSvPlatBaseData_fieldStorage[];
extern char beSvPlatBaseData_fieldOffsets[];
extern void *beSvPlatBaseData_meta;
}
extern "C" {
void beSvPlatBaseData_fieldInit(){
 void *value0=beSvPlatBaseData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSvPlatBaseData_fieldTypes,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=beSvSlotDataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beSvPlatBaseData_fieldNames,beSvPlatBaseData_fieldStorage,beSvPlatBaseData_fieldOffsets,value1);
}
}
#pragma pop
