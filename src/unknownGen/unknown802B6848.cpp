#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_800AF4A4();
extern char beTextureCtrlData_fieldTypes[];
extern char beTextureCtrlData_fieldNames[];
extern char beTextureCtrlData_fieldStorage[];
extern char beTextureCtrlData_fieldOffsets[];
extern void *beTextureCtrlData_meta;
}
extern "C" {
void beTextureCtrlData_fieldInit(){
 void *value0=beTextureCtrlData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTextureCtrlData_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_800AF4A4();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,beTextureCtrlData_fieldNames,beTextureCtrlData_fieldStorage,beTextureCtrlData_fieldOffsets,value1);
}
}
#pragma pop
