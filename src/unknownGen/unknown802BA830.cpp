#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80036C40();
void fn_8003EC68(void *,int);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beSelectCtrlInfoWork_fieldTypes[];
extern char beSelectCtrlInfoWork_fieldNames[];
extern char beSelectCtrlInfoWork_fieldStorage[];
extern char beSelectCtrlInfoWork_fieldOffsets[];
extern void *beSelectCtrlInfoWork_meta;
}
extern "C" {
void beSelectCtrlInfoWork_fieldInit(){
 void *value0=beSelectCtrlInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beSelectCtrlInfoWork_fieldTypes,5);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 fn_8003EC68(value2,1);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+4));
 void *value4=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+56)=value4;
 meta_setupFields(value0,beSelectCtrlInfoWork_fieldNames,beSelectCtrlInfoWork_fieldStorage,beSelectCtrlInfoWork_fieldOffsets,value1);
}
}
#pragma pop
