#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beModelCtrlData_fieldTypes[];
extern char beModelCtrlData_fieldNames[];
extern char beModelCtrlData_fieldStorage[];
extern char beModelCtrlData_fieldOffsets[];
extern void *beModelCtrlData_meta;
}
extern "C" {
void beModelCtrlData_fieldInit(){
 void *value0=beModelCtrlData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beModelCtrlData_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 meta_setupFields(value0,beModelCtrlData_fieldNames,beModelCtrlData_fieldStorage,beModelCtrlData_fieldOffsets,value1);
}
}
#pragma pop
