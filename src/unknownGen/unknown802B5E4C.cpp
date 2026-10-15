#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80071694(void *,int);
extern char beTimerData_fieldTypes[];
extern char beTimerData_fieldNames[];
extern char beTimerData_fieldStorage[];
extern char beTimerData_fieldOffsets[];
extern void *beTimerData_meta;
}
extern "C" {
void beTimerData_fieldInit(){
 void *value0=beTimerData_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beTimerData_fieldTypes,4);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80071694(value2,0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80071694(value3,0);
 meta_setupFields(value0,beTimerData_fieldNames,beTimerData_fieldStorage,beTimerData_fieldOffsets,value1);
}
}
#pragma pop
