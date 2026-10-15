#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801BFC74();
extern char beCameraDemoData_fieldTypes[];
extern char beCameraDemoData_fieldNames[];
extern char beCameraDemoData_fieldStorage[];
extern char beCameraDemoData_fieldOffsets[];
extern void *beCameraDemoData_meta;
}
extern "C" {
void beCameraDemoData_fieldInit(){
 void *value0=beCameraDemoData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beCameraDemoData_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801BFC74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beCameraDemoData_fieldNames,beCameraDemoData_fieldStorage,beCameraDemoData_fieldOffsets,value1);
}
}
#pragma pop
