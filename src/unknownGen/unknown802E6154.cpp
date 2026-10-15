#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_801ADB98();
void *fn_801CAC30();
void *beAction2DataList_metaObject();
extern char beAction2Info_fieldTypes[];
extern char beAction2Info_fieldNames[];
extern char beAction2Info_fieldStorage[];
extern char beAction2Info_fieldOffsets[];
extern void *beAction2Info_meta;
}
extern "C" {
void beAction2Info_fieldInit(){
 void *value0=beAction2Info_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,beAction2Info_fieldTypes,3);
 void *value2=meta_field(value0,value1);
 void *value3=fn_801ADB98();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 void *value5=fn_801CAC30();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value4)+56)=value5;
 void *value6=meta_field(value0,(reinterpret_cast<char *>(value1)+2));
 void *value7=beAction2DataList_metaObject();
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value6)+56)=value7;
 *reinterpret_cast<unsigned char *>(reinterpret_cast<char *>(value6)+52)=1;
 meta_setupFields(value0,beAction2Info_fieldNames,beAction2Info_fieldStorage,beAction2Info_fieldOffsets,value1);
}
}
#pragma pop
