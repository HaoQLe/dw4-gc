#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80033E74();
void *fn_80036C40();
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
extern char beMatCtrlInfoWork_fieldTypes[];
extern char beMatCtrlInfoWork_fieldNames[];
extern char beMatCtrlInfoWork_fieldStorage[];
extern char beMatCtrlInfoWork_fieldOffsets[];
extern void *beMatCtrlInfoWork_meta;
}
extern "C" {
void beMatCtrlInfoWork_fieldInit(){
 void *value0=beMatCtrlInfoWork_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beMatCtrlInfoWork_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_80036C40();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value2)+52)=1;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_80033E74();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,beMatCtrlInfoWork_fieldNames,beMatCtrlInfoWork_fieldStorage,beMatCtrlInfoWork_fieldOffsets,value1);
}
}
#pragma pop
