#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029A5C();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char igFileName_fieldTypes[];
extern char igFileName_fieldNames[];
extern char igFileName_fieldStorage[];
extern char igFileName_fieldOffsets[];
extern void *igFileName_meta;
}
extern "C" {
void igFileName_fieldInit(){
 void *value0=igFileName_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igFileName_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80029A5C();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 meta_setupFields(value0,igFileName_fieldNames,igFileName_fieldStorage,igFileName_fieldOffsets,value1);
}
}
#pragma pop
