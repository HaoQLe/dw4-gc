#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_8004D4BC(void *,float);
void *fn_800607F4(void *);
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
void igLightStateAttr_fieldInit();
void igObjectList_register();
void igVisualAttribute_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igLineWidthAttr_className[];
extern char igLightingStateAttr_className[];
extern char igLightStateAttrList_className[];
extern char lbl_80479298[];
extern char igLightStateAttr_className[];
extern char igLineWidthAttr_vtable[];
extern char igLightingStateAttr_vtable[];
extern char igLightStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightStateAttrList_vtable[];
extern char lbl_8047DD44[];
extern char lbl_8047E50C[];
extern char lbl_8055E3D4[4];
extern char lbl_8055E3E0[4];
extern char lbl_8055E3E4[4];
extern char lbl_8055E3E8[4];
extern char lbl_8055E3EC[4];
extern char lbl_8055E3F0[4];
extern char lbl_8055E3F4[4];
extern char lbl_8055E3F8[4];
extern char lbl_8055E3FC[8];
extern void *lbl_805621F4;
extern void *igLineWidthAttr_meta;
extern void *igLightingStateAttr_meta;
extern void *igLightStateAttrList_meta;
extern void *igLightStateAttr_meta;
extern char lbl_80566810[4];
void *igLineWidthAttr_getMeta();
void *igLineWidthAttr_vtableRead();
void igLineWidthAttr_registerNow();
void igLineWidthAttr_register();
void *igLineWidthAttr_getMetaCall();
void igLineWidthAttr_fieldInit();
void *igLightingStateAttr_getMeta();
void *igLightingStateAttr_vtableRead();
void igLightingStateAttr_registerNow();
void igLightingStateAttr_register();
void *igLightingStateAttr_getMetaCall();
void igLightingStateAttr_fieldInit();
void *igLightStateAttrList_getMeta();
void *igLightStateAttrList_vtableRead();
void igLightStateAttrList_registerNow();
void igLightStateAttrList_register();
void *igLightStateAttrList_getMetaCall();
void *igLightStateAttr_getMeta();
void *igLightStateAttr_vtableRead();
void igLightStateAttr_registerNow();
void igLightStateAttr_register();
void *igLightStateAttr_getMetaCall();
}
struct UnknownGenObject800B5038_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B5274_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject800B549C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800B5670 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800B5670(){igObject_construct(this);}
};
struct UnknownGenObject800B5670 : UnknownGenRoot800B5670 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject800B5670(){unknown00=igLightStateAttr_vtable;}
};
extern "C" {
void *igLineWidthAttr_getMeta(){
 if(!igLineWidthAttr_meta || !(reinterpret_cast<unsigned int *>(igLineWidthAttr_meta)[0x24/4]&4)) igLineWidthAttr_registerNow();
 return igLineWidthAttr_meta;
}
void *igLineWidthAttr_vtableRead(){
 UnknownGenObject800B5038_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igLineWidthAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLineWidthAttr_registerNow(){
 meta_registerNow((int)igLineWidthAttr_register);
}
void igLineWidthAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLineWidthAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLineWidthAttr_getMetaCall,(int)igLineWidthAttr_className,16,(int)igLineWidthAttr_vtableRead,(int)igLineWidthAttr_fieldInit,0,0);
}
void *igLineWidthAttr_getMetaCall(){return igLineWidthAttr_getMeta();}
void igLineWidthAttr_fieldInit(){
 void *value0=igLineWidthAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E3D4,1);
 void *value2=meta_field(value0,value1);
 fn_8004D4BC(value2,*reinterpret_cast<float *>((lbl_80566810+0)));
 meta_setupFields(value0,lbl_8055E3E0,lbl_8055E3E4,lbl_8055E3E8,value1);
}
void *igLightingStateAttr_create(void *object){
 igLightingStateAttr_registerNow();
 return meta_createInstance(igLightingStateAttr_meta,object);
}
void *fn_800B51FC(){
 if(!igLightingStateAttr_meta) igLightingStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightingStateAttr_meta;
}
void *igLightingStateAttr_getMeta(){
 if(!igLightingStateAttr_meta || !(reinterpret_cast<unsigned int *>(igLightingStateAttr_meta)[0x24/4]&4)) igLightingStateAttr_registerNow();
 return igLightingStateAttr_meta;
}
void *igLightingStateAttr_vtableRead(){
 UnknownGenObject800B5274_0 object;
 igObject_construct(&object);
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igLightingStateAttr_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightingStateAttr_registerNow(){
 meta_registerNow((int)igLightingStateAttr_register);
}
void igLightingStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLightingStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightingStateAttr_getMetaCall,(int)igLightingStateAttr_className,16,(int)igLightingStateAttr_vtableRead,(int)igLightingStateAttr_fieldInit,0,0);
}
void *igLightingStateAttr_getMetaCall(){return igLightingStateAttr_getMeta();}
void igLightingStateAttr_fieldInit(){
 void *value0=igLightingStateAttr_meta;
 void *value1=meta_fieldCount(value0);
 meta_appendFields(value0,lbl_8055E3EC,1);
 meta_setupFields(value0,lbl_8055E3F0,lbl_8055E3F4,lbl_8055E3F8,value1);
}
void *igLightStateAttrList_create(void *object){
 igLightStateAttrList_registerNow();
 return meta_createInstance(igLightStateAttrList_meta,object);
}
void *fn_800B5424(){
 if(!igLightStateAttrList_meta) igLightStateAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightStateAttrList_meta;
}
void *igLightStateAttrList_getMeta(){
 if(!igLightStateAttrList_meta || !(reinterpret_cast<unsigned int *>(igLightStateAttrList_meta)[0x24/4]&4)) igLightStateAttrList_registerNow();
 return igLightStateAttrList_meta;
}
void *igLightStateAttrList_vtableRead(){
 UnknownGenObject800B549C_0 object;
 igObject_construct(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80476E0C;
 object.unknown00=igObjectList_vtable;
 object.unknown00=lbl_8047DD44;
 object.unknown00=igLightStateAttrList_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightStateAttrList_registerNow(){
 meta_registerNow((int)igLightStateAttrList_register);
}
void igLightStateAttrList_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLightStateAttrList_meta,(int)igObjectList_register,(int)fn_80024180,(int)igLightStateAttrList_getMetaCall,(int)igLightStateAttrList_className,20,(int)igLightStateAttrList_vtableRead,0,0,(int)lbl_8055E3FC);
}
void *igLightStateAttrList_getMetaCall(){return igLightStateAttrList_getMeta();}
void *igLightStateAttr_create(void *object){
 igLightStateAttr_registerNow();
 return meta_createInstance(igLightStateAttr_meta,object);
}
void *fn_800B55F8(){
 if(!igLightStateAttr_meta) igLightStateAttr_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightStateAttr_meta;
}
void *igLightStateAttr_getMeta(){
 if(!igLightStateAttr_meta || !(reinterpret_cast<unsigned int *>(igLightStateAttr_meta)[0x24/4]&4)) igLightStateAttr_registerNow();
 return igLightStateAttr_meta;
}
void *igLightStateAttr_vtableRead(){
 UnknownGenObject800B5670 object;
 object.unknown00=lbl_8047D578;
 object.unknown00=lbl_8047E50C;
 object.unknown00=igLightStateAttr_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igLightStateAttr_registerNow(){
 meta_registerNow((int)igLightStateAttr_register);
}
void igLightStateAttr_register(){
 fn_800ABC8C();
 meta_registerClass(0,(int)&igLightStateAttr_meta,(int)igVisualAttribute_register,(int)fn_800AC294,(int)igLightStateAttr_getMetaCall,(int)igLightStateAttr_className,24,(int)igLightStateAttr_vtableRead,(int)igLightStateAttr_fieldInit,0,(int)lbl_80479298);
}
void *igLightStateAttr_getMetaCall(){return igLightStateAttr_getMeta();}
}
#pragma pop
