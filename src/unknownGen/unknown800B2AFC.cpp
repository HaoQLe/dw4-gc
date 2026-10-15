#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void fn_80046E58(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800ABC8C();
void *fn_800AC294();
void fn_800CDF20();
void igObjectList_register();
void igParticleAttr_fieldInit();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igPixelPipelineModeAttr_className[];
extern char igParticleAttrList_className[];
extern char igParticleAttr_className[];
extern char igPixelPipelineModeAttr_vtable[];
extern char igParticleAttr_vtable[];
extern char lbl_8047D578[];
extern char igParticleAttrList_vtable[];
extern char lbl_8047E130[];
extern char lbl_8047E50C[];
extern char igPixelPipelineModeAttr_fieldTypes[4];
extern char igPixelPipelineModeAttr_fieldNames[4];
extern char igPixelPipelineModeAttr_fieldStorage[4];
extern char igPixelPipelineModeAttr_fieldOffsets[4];
extern char lbl_8055E2D8[4];
extern char igParticleAttrList_dependencies[8];
extern char igParticleAttr_dependencies[8];
extern void *igPixelPipelineModeAttr_meta;
extern void *igParticleAttrList_meta;
extern void *igParticleAttr_meta;
void *igPixelPipelineModeAttr_getMeta();
void *igPixelPipelineModeAttr_vtableRead();
void igPixelPipelineModeAttr_arkRegister();
void igPixelPipelineModeAttr_register();
void *igPixelPipelineModeAttr_getMetaCall();
void igPixelPipelineModeAttr_fieldInit();
void *igParticleAttrList_getMeta();
void *igParticleAttrList_vtableRead();
void igParticleAttrList_arkRegister();
void igParticleAttrList_register();
void *igParticleAttrList_getMetaCall();
void *igParticleAttr_getMeta();
void *igParticleAttr_vtableRead();
void igParticleAttr_arkRegister();
void igParticleAttr_register();
void *igParticleAttr_getMetaCall();
}
struct UnknownGenObject800B2B38_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B2D10_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B2E70 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B2E70(){igObject_construct(this);}
};
struct UnknownGenObject800B2E70 : UnknownGenRoot800B2E70 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[28];
 inline ~UnknownGenObject800B2E70(){unknown00=igParticleAttr_vtable;}
};
extern "C" {
void *igPixelPipelineModeAttr_getMeta(){
 if(!igPixelPipelineModeAttr_meta || !(reinterpret_cast<unsigned int *>(igPixelPipelineModeAttr_meta)[0x24/4]&4)) igPixelPipelineModeAttr_arkRegister();
 return igPixelPipelineModeAttr_meta;
}
void *igPixelPipelineModeAttr_vtableRead(){
 UnknownGenObject800B2B38_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igPixelPipelineModeAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igPixelPipelineModeAttr_arkRegister(){
 meta_registerNow((int)igPixelPipelineModeAttr_register);
}
void igPixelPipelineModeAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igPixelPipelineModeAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igPixelPipelineModeAttr_getMetaCall,(int)igPixelPipelineModeAttr_className,16,(int)igPixelPipelineModeAttr_vtableRead,(int)igPixelPipelineModeAttr_fieldInit,0,0);
}
void *igPixelPipelineModeAttr_getMetaCall(){return igPixelPipelineModeAttr_getMeta();}
void igPixelPipelineModeAttr_fieldInit(){
 void *value0=igPixelPipelineModeAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,igPixelPipelineModeAttr_fieldTypes,1);
 void *value2=meta_field(value0,value1);
 fn_80046E58(value2,lbl_8055E2D8);
 *reinterpret_cast<void * *>(reinterpret_cast<char *>(value2)+52)=(void *)fn_800CDF20;
 meta_setupFields(value0,igPixelPipelineModeAttr_fieldNames,igPixelPipelineModeAttr_fieldStorage,igPixelPipelineModeAttr_fieldOffsets,value1);
}
void *igParticleAttrList_getMeta(){
 if(!igParticleAttrList_meta || !(reinterpret_cast<unsigned int *>(igParticleAttrList_meta)[0x24/4]&4)) igParticleAttrList_arkRegister();
 return igParticleAttrList_meta;
}
void *igParticleAttrList_vtableRead(){
 UnknownGenObject800B2D10_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047E130;
 object.unknown00=igParticleAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParticleAttrList_arkRegister(){
 meta_registerNow((int)igParticleAttrList_register);
}
void igParticleAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igParticleAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igParticleAttrList_getMetaCall,(int)igParticleAttrList_className,20,(int)igParticleAttrList_vtableRead,0,0,(int)igParticleAttrList_dependencies);
}
void *igParticleAttrList_getMetaCall(){return igParticleAttrList_getMeta();}
void *igParticleAttr_getMeta(){
 if(!igParticleAttr_meta || !(reinterpret_cast<unsigned int *>(igParticleAttr_meta)[0x24/4]&4)) igParticleAttr_arkRegister();
 return igParticleAttr_meta;
}
void *igParticleAttr_vtableRead(){
 UnknownGenObject800B2E70 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igParticleAttr_vtable;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igParticleAttr_arkRegister(){
 meta_registerNow((int)igParticleAttr_register);
}
void igParticleAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igParticleAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igParticleAttr_getMetaCall,(int)igParticleAttr_className,48,(int)igParticleAttr_vtableRead,(int)igParticleAttr_fieldInit,0,(int)igParticleAttr_dependencies);
}
void *igParticleAttr_getMetaCall(){return igParticleAttr_getMeta();}
}
#pragma pop
