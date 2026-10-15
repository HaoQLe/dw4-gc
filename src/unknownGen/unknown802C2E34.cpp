#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80053650(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beNumberCtrlInfoWork_fieldTypes[];
extern char beNumberCtrlInfoWork_fieldNames[];
extern char beNumberCtrlInfoWork_fieldStorage[];
extern char beNumberCtrlInfoWork_fieldOffsets[];
extern void *beNumberCtrlInfoWork_meta;
}
extern "C" {
void beNumberCtrlInfoWork_fieldInit(){
 void *value0=beNumberCtrlInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beNumberCtrlInfoWork_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 fn_80053650(value2,-1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_80053650(value3,-1);
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_80053650(value4,-1);
 meta_setupFields(value0,beNumberCtrlInfoWork_fieldNames,beNumberCtrlInfoWork_fieldStorage,beNumberCtrlInfoWork_fieldOffsets,value1);
}
}
#pragma pop
