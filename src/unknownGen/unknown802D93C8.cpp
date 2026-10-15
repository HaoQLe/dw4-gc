#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_8002213C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beUnicodeObj_fieldTypes[];
extern char beUnicodeObj_fieldNames[];
extern char beUnicodeObj_fieldStorage[];
extern char beUnicodeObj_fieldOffsets[];
extern void *beUnicodeObj_meta;
}
extern "C" {
void beUnicodeObj_fieldInit(){
 void *value0=beUnicodeObj_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beUnicodeObj_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8002213C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+60)=value3;
 meta_setupFields(value0,beUnicodeObj_fieldNames,beUnicodeObj_fieldStorage,beUnicodeObj_fieldOffsets,value1);
}
}
#pragma pop
