#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_8004D4BC(void *,float);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126808(void *,void *);
extern char igSphere_fieldTypes[8];
extern char igSphere_fieldNames[8];
extern char igSphere_fieldStorage[8];
extern char igSphere_fieldOffsets[8];
extern void *igSphere_meta;
extern char lbl_805669D8[4];
extern char lbl_805669DC[4];
}
struct UnknownGenL8011F6AC_8 {
 float m08;
 float m0C;
 float m10;
};
extern "C" {
void igSphere_fieldInit(){
 UnknownGenL8011F6AC_8 local0;
 void *value0=igSphere_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igSphere_fieldTypes,2);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_805669D8+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_805669D8+0));
 local0.m10=*reinterpret_cast<float *>((lbl_805669D8+0));
 fn_80126808(value2,&local0);
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 fn_8004D4BC(value3,*reinterpret_cast<float *>((lbl_805669DC+0)));
 meta_setupFields(value0,igSphere_fieldNames,igSphere_fieldStorage,igSphere_fieldOffsets,value1);
}
}
#pragma pop
