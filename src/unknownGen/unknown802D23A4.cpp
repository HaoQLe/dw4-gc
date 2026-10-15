#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80037E48();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beLuaDataObject_fieldTypes[];
extern char beLuaDataObject_fieldNames[];
extern char beLuaDataObject_fieldStorage[];
extern char beLuaDataObject_fieldOffsets[];
extern void *beLuaDataObject_meta;
}
extern "C" {
void beLuaDataObject_fieldInit(){
 void *value0=beLuaDataObject_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beLuaDataObject_fieldTypes,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value3=fn_80037E48();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,beLuaDataObject_fieldNames,beLuaDataObject_fieldStorage,beLuaDataObject_fieldOffsets,value1);
}
}
#pragma pop
