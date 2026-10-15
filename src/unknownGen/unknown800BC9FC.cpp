#include <unknownGen.h>
#include <meta/igAlphaFunctionAttr.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80046E58(void *,void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void *fn_800C5A04(int);
void *fn_800C5AD4(int);
void *fn_800C5BA4(int);
void *fn_800C5CA8(int);
void fn_800D60D8();
void fn_800D6128();
void *igGamecubeVisualContext_virtual36C(void *,void *);
void *igGamecubeVisualContext_virtual374(void *,float);
void igVisualAttribute_register();
extern char igTextureStageConstantColorSelectAttr_className[];
extern char igTextureStageConstantAlphaSelectAttr_className[];
extern char igTextureEnvironmentColorAttr_className[];
extern char igTextureConstantAttr_className[];
extern char igTextureStageConstantColorSelectAttr_vtable[];
extern char igTextureStageConstantAlphaSelectAttr_vtable[];
extern char igTextureEnvironmentColorAttr_vtable[];
extern char igTextureConstantAttr_vtable[];
extern char lbl_8047D578[];
extern char lbl_8047E50C[];
extern char igTextureStageConstantColorSelectAttr_fieldTypes[8];
extern char igTextureStageConstantColorSelectAttr_fieldNames[8];
extern char igTextureStageConstantColorSelectAttr_fieldStorage[8];
extern char igTextureStageConstantColorSelectAttr_fieldOffsets[8];
extern char lbl_8055E76C[4];
extern char igTextureStageConstantAlphaSelectAttr_fieldTypes[8];
extern char igTextureStageConstantAlphaSelectAttr_fieldNames[8];
extern char igTextureStageConstantAlphaSelectAttr_fieldStorage[8];
extern char igTextureStageConstantAlphaSelectAttr_fieldOffsets[8];
extern char lbl_8055E790[4];
extern char igTextureEnvironmentColorAttr_fieldTypes[8];
extern char igTextureEnvironmentColorAttr_fieldNames[8];
extern char igTextureEnvironmentColorAttr_fieldStorage[8];
extern char igTextureEnvironmentColorAttr_fieldOffsets[8];
extern char igTextureConstantAttr_fieldTypes[8];
extern char igTextureConstantAttr_fieldNames[8];
extern char igTextureConstantAttr_fieldStorage[8];
extern char igTextureConstantAttr_fieldOffsets[8];
extern void *igTextureStageConstantColorSelectAttr_meta;
extern void *igTextureStageConstantAlphaSelectAttr_meta;
extern void *igTextureEnvironmentColorAttr_meta;
extern void *igTextureConstantAttr_meta;
void *igTextureStageConstantColorSelectAttr_getMeta();
void *igTextureStageConstantColorSelectAttr_vtableRead();
void igTextureStageConstantColorSelectAttr_arkRegister();
void igTextureStageConstantColorSelectAttr_register();
void *igTextureStageConstantColorSelectAttr_getMetaCall();
void igTextureStageConstantColorSelectAttr_fieldInit();
void *igTextureStageConstantAlphaSelectAttr_getMeta();
void *igTextureStageConstantAlphaSelectAttr_vtableRead();
void igTextureStageConstantAlphaSelectAttr_arkRegister();
void igTextureStageConstantAlphaSelectAttr_register();
void *igTextureStageConstantAlphaSelectAttr_getMetaCall();
void igTextureStageConstantAlphaSelectAttr_fieldInit();
void *igTextureEnvironmentColorAttr_getMeta();
void *igTextureEnvironmentColorAttr_vtableRead();
void igTextureEnvironmentColorAttr_arkRegister();
void igTextureEnvironmentColorAttr_register();
void *igTextureEnvironmentColorAttr_getMetaCall();
void igTextureEnvironmentColorAttr_fieldInit();
void *igTextureConstantAttr_getMeta();
void *igTextureConstantAttr_vtableRead();
void igTextureConstantAttr_arkRegister();
void igTextureConstantAttr_register();
void *igTextureConstantAttr_getMetaCall();
void igTextureConstantAttr_fieldInit();
}
struct UnknownGenObject800BC288_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC478_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC6A0_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800BC86C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void igAlphaFunctionAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual36C((void *)p1,(void *)(int)reinterpret_cast<Meta::igAlphaFunctionAttr *>((void *)p0)->_func);
 float value0=reinterpret_cast<Meta::igAlphaFunctionAttr *>((void *)p0)->_refValue;
 igGamecubeVisualContext_virtual374((void *)p1,value0);
}
}
#pragma pop
