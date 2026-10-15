#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void fn_80126CF0(void *,void *);
extern char igSceneAmbientColorAttr_fieldTypes[4];
extern char igSceneAmbientColorAttr_fieldNames[4];
extern char igSceneAmbientColorAttr_fieldStorage[4];
extern char igSceneAmbientColorAttr_fieldOffsets[4];
extern void *igSceneAmbientColorAttr_meta;
extern char lbl_80566814[4];
}
struct UnknownGenL800B134C_8 {
 float m08;
 float m0C;
 float m10;
 float m14;
};
extern "C" {
void igSceneAmbientColorAttr_fieldInit(){
 UnknownGenL800B134C_8 local0;
 void *value0=igSceneAmbientColorAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igSceneAmbientColorAttr_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 local0.m08=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m0C=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m10=*reinterpret_cast<float *>((lbl_80566814+0));
 local0.m14=*reinterpret_cast<float *>((lbl_80566814+0));
 fn_80126CF0(value2,&local0);
 meta_setupFields(value0,igSceneAmbientColorAttr_fieldNames,igSceneAmbientColorAttr_fieldStorage,igSceneAmbientColorAttr_fieldOffsets,value1);
}
}
#pragma pop
