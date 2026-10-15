#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
void *beGroupKeepList_metaObject();
extern char bePoint01Info_fieldTypes[];
extern char bePoint01Info_fieldNames[];
extern char bePoint01Info_fieldStorage[];
extern char bePoint01Info_fieldOffsets[];
extern void *bePoint01Info_meta;
}
extern "C" {
void bePoint01Info_fieldInit(){
 void *value0=bePoint01Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,bePoint01Info_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=beGroupKeepList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value4)+52)=1;
 meta_setupFields(value0,bePoint01Info_fieldNames,bePoint01Info_fieldStorage,bePoint01Info_fieldOffsets,value1);
}
}
#pragma pop
