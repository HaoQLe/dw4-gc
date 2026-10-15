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
extern char lbl_8055E74C[8];
extern char lbl_8055E754[8];
extern char lbl_8055E75C[8];
extern char lbl_8055E764[8];
extern char lbl_8055E76C[4];
extern char lbl_8055E770[8];
extern char lbl_8055E778[8];
extern char lbl_8055E780[8];
extern char lbl_8055E788[8];
extern char lbl_8055E790[4];
extern char lbl_8055E794[8];
extern char lbl_8055E79C[8];
extern char lbl_8055E7A4[8];
extern char lbl_8055E7AC[8];
extern char lbl_8055E7B4[8];
extern char lbl_8055E7BC[8];
extern char lbl_8055E7C4[8];
extern char lbl_8055E7CC[8];
extern void *igTextureStageConstantColorSelectAttr_meta;
extern void *igTextureStageConstantAlphaSelectAttr_meta;
extern void *igTextureEnvironmentColorAttr_meta;
extern void *igTextureConstantAttr_meta;
void *igTextureStageConstantColorSelectAttr_getMeta();
void *igTextureStageConstantColorSelectAttr_vtableRead();
void igTextureStageConstantColorSelectAttr_registerNow();
void igTextureStageConstantColorSelectAttr_register();
void *igTextureStageConstantColorSelectAttr_getMetaCall();
void igTextureStageConstantColorSelectAttr_fieldInit();
void *igTextureStageConstantAlphaSelectAttr_getMeta();
void *igTextureStageConstantAlphaSelectAttr_vtableRead();
void igTextureStageConstantAlphaSelectAttr_registerNow();
void igTextureStageConstantAlphaSelectAttr_register();
void *igTextureStageConstantAlphaSelectAttr_getMetaCall();
void igTextureStageConstantAlphaSelectAttr_fieldInit();
void *igTextureEnvironmentColorAttr_getMeta();
void *igTextureEnvironmentColorAttr_vtableRead();
void igTextureEnvironmentColorAttr_registerNow();
void igTextureEnvironmentColorAttr_register();
void *igTextureEnvironmentColorAttr_getMetaCall();
void igTextureEnvironmentColorAttr_fieldInit();
void *igTextureConstantAttr_getMeta();
void *igTextureConstantAttr_vtableRead();
void igTextureConstantAttr_registerNow();
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
void *igTextureStageConstantColorSelectAttr_getMeta(){
 if(!igTextureStageConstantColorSelectAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureStageConstantColorSelectAttr_meta)[0x24/4]&4)) igTextureStageConstantColorSelectAttr_registerNow();
 return igTextureStageConstantColorSelectAttr_meta;
}
void *igTextureStageConstantColorSelectAttr_vtableRead(){
 UnknownGenObject800BC288_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureStageConstantColorSelectAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureStageConstantColorSelectAttr_registerNow(){
 meta_registerNow((int)igTextureStageConstantColorSelectAttr_register);
}
void igTextureStageConstantColorSelectAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureStageConstantColorSelectAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureStageConstantColorSelectAttr_getMetaCall,(int)igTextureStageConstantColorSelectAttr_className,20,(int)igTextureStageConstantColorSelectAttr_vtableRead,(int)igTextureStageConstantColorSelectAttr_fieldInit,0,0);
}
void *igTextureStageConstantColorSelectAttr_getMetaCall(){return igTextureStageConstantColorSelectAttr_getMeta();}
void igTextureStageConstantColorSelectAttr_fieldInit(){
 void *value0=igTextureStageConstantColorSelectAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E74C,2);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E76C);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800D60D8;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+48)=(void *)fn_800C5CA8;
 meta_setupFields(value0,lbl_8055E754,lbl_8055E75C,lbl_8055E764,value1);
}
void *igTextureStageConstantAlphaSelectAttr_getMeta(){
 if(!igTextureStageConstantAlphaSelectAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureStageConstantAlphaSelectAttr_meta)[0x24/4]&4)) igTextureStageConstantAlphaSelectAttr_registerNow();
 return igTextureStageConstantAlphaSelectAttr_meta;
}
void *igTextureStageConstantAlphaSelectAttr_vtableRead(){
 UnknownGenObject800BC478_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureStageConstantAlphaSelectAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureStageConstantAlphaSelectAttr_registerNow(){
 meta_registerNow((int)igTextureStageConstantAlphaSelectAttr_register);
}
void igTextureStageConstantAlphaSelectAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureStageConstantAlphaSelectAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureStageConstantAlphaSelectAttr_getMetaCall,(int)igTextureStageConstantAlphaSelectAttr_className,20,(int)igTextureStageConstantAlphaSelectAttr_vtableRead,(int)igTextureStageConstantAlphaSelectAttr_fieldInit,0,0);
}
void *igTextureStageConstantAlphaSelectAttr_getMetaCall(){return igTextureStageConstantAlphaSelectAttr_getMeta();}
void igTextureStageConstantAlphaSelectAttr_fieldInit(){
 void *value0=igTextureStageConstantAlphaSelectAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E770,2);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E790);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800D6128;
 void *value3=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value3)+48)=(void *)fn_800C5BA4;
 meta_setupFields(value0,lbl_8055E778,lbl_8055E780,lbl_8055E788,value1);
}
void *igTextureEnvironmentColorAttr_create(void *object){
 igTextureEnvironmentColorAttr_registerNow();
 return meta_createInstance(igTextureEnvironmentColorAttr_meta,object);
}
void *igTextureEnvironmentColorAttr_getMeta(){
 if(!igTextureEnvironmentColorAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureEnvironmentColorAttr_meta)[0x24/4]&4)) igTextureEnvironmentColorAttr_registerNow();
 return igTextureEnvironmentColorAttr_meta;
}
void *igTextureEnvironmentColorAttr_vtableRead(){
 UnknownGenObject800BC6A0_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureEnvironmentColorAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureEnvironmentColorAttr_registerNow(){
 meta_registerNow((int)igTextureEnvironmentColorAttr_register);
}
void igTextureEnvironmentColorAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureEnvironmentColorAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureEnvironmentColorAttr_getMetaCall,(int)igTextureEnvironmentColorAttr_className,20,(int)igTextureEnvironmentColorAttr_vtableRead,(int)igTextureEnvironmentColorAttr_fieldInit,0,0);
}
void *igTextureEnvironmentColorAttr_getMetaCall(){return igTextureEnvironmentColorAttr_getMeta();}
void igTextureEnvironmentColorAttr_fieldInit(){
 void *value0=igTextureEnvironmentColorAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E794,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C5AD4;
 meta_setupFields(value0,lbl_8055E79C,lbl_8055E7A4,lbl_8055E7AC,value1);
}
void *igTextureConstantAttr_getMeta(){
 if(!igTextureConstantAttr_meta || !(reinterpret_cast<unsigned int *>(igTextureConstantAttr_meta)[0x24/4]&4)) igTextureConstantAttr_registerNow();
 return igTextureConstantAttr_meta;
}
void *igTextureConstantAttr_vtableRead(){
 UnknownGenObject800BC86C_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igTextureConstantAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igTextureConstantAttr_registerNow(){
 meta_registerNow((int)igTextureConstantAttr_register);
}
void igTextureConstantAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igTextureConstantAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igTextureConstantAttr_getMetaCall,(int)igTextureConstantAttr_className,20,(int)igTextureConstantAttr_vtableRead,(int)igTextureConstantAttr_fieldInit,0,0);
}
void *igTextureConstantAttr_getMetaCall(){return igTextureConstantAttr_getMeta();}
void igTextureConstantAttr_fieldInit(){
 void *value0=igTextureConstantAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E7B4,2);
 void *value2=meta_field(value0,(reinterpret_cast<char *>(value1)+1));
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+48)=(void *)fn_800C5A04;
 meta_setupFields(value0,lbl_8055E7BC,lbl_8055E7C4,lbl_8055E7CC,value1);
}
void igAlphaFunctionAttr_virtual60(int p0,int p1){
 igGamecubeVisualContext_virtual36C((void *)p1,(void *)(int)reinterpret_cast<Meta::igAlphaFunctionAttr *>((void *)p0)->_func);
 float value0=reinterpret_cast<Meta::igAlphaFunctionAttr *>((void *)p0)->_refValue;
 igGamecubeVisualContext_virtual374((void *)p1,value0);
}
}
#pragma pop
