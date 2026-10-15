#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *beLuaDataObject_metaObject();
extern char beLuaData_fieldTypes[];
extern char beLuaData_fieldNames[];
extern char beLuaData_fieldStorage[];
extern char beLuaData_fieldOffsets[];
extern void *beLuaData_meta;
}
extern "C" {
void beLuaData_fieldInit(){
 void *value0=beLuaData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beLuaData_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=beLuaDataObject_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beLuaData_fieldNames,beLuaData_fieldStorage,beLuaData_fieldOffsets,value1);
}
}
#pragma pop
