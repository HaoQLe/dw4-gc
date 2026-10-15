#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void *fn_8011205C(void *);
void fn_801264B4(void *,void *);
extern char igMouseCursor_fieldTypes[8];
extern char igMouseCursor_fieldNames[8];
extern char igMouseCursor_fieldStorage[8];
extern char igMouseCursor_fieldOffsets[8];
extern void *igMouseCursor_meta;
extern char lbl_805669AC[4];
}
struct UnknownGenL8010FFF4_8 {
 float m08;
 float m0C;
};
extern "C" {
void igMouseCursor_fieldInit(){
 UnknownGenL8010FFF4_8 local0;
 void *value0=igMouseCursor_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igMouseCursor_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 void *value3=fn_8011205C(value2);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+56)=value3;
 void *value4=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 local0.m08=*reinterpret_cast<float *>((lbl_805669AC+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669AC+0));
 fn_801264B4(value4,&local0);
 meta_setupFields(value0,igMouseCursor_fieldNames,igMouseCursor_fieldStorage,igMouseCursor_fieldOffsets,value1);
}
}
#pragma pop
