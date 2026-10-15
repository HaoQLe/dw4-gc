#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beSaveMemoryObj_fieldTypes[];
extern char beSaveMemoryObj_fieldNames[];
extern char beSaveMemoryObj_fieldStorage[];
extern char beSaveMemoryObj_fieldOffsets[];
extern void *beSaveMemoryObj_meta;
}
extern "C" {
void beSaveMemoryObj_fieldInit(){
 void *value0=beSaveMemoryObj_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSaveMemoryObj_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,beSaveMemoryObj_fieldNames,beSaveMemoryObj_fieldStorage,beSaveMemoryObj_fieldOffsets,value1);
}
}
#pragma pop
