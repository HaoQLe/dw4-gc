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
extern char igLightStateAttr_dependencies[];
extern char igLightStateAttr_className[];
extern char igLineWidthAttr_vtable[];
extern char igLightingStateAttr_vtable[];
extern char igLightStateAttr_vtable[];
extern char lbl_8047D578[];
extern char igLightStateAttrList_vtable[];
extern char lbl_8047DD44[];
extern char lbl_8047E50C[];
extern char igLineWidthAttr_fieldTypes[4];
extern char igLineWidthAttr_fieldNames[4];
extern char igLineWidthAttr_fieldStorage[4];
extern char igLineWidthAttr_fieldOffsets[4];
extern char igLightingStateAttr_fieldTypes[4];
extern char igLightingStateAttr_fieldNames[4];
extern char igLightingStateAttr_fieldStorage[4];
extern char igLightingStateAttr_fieldOffsets[4];
extern char igLightStateAttrList_dependencies[8];
extern void *lbl_805621F4;
extern void *igLineWidthAttr_meta;
extern void *igLightingStateAttr_meta;
extern void *igLightStateAttrList_meta;
extern void *igLightStateAttr_meta;
extern char lbl_80566810[4];
void *igLineWidthAttr_getMeta();
void *igLineWidthAttr_vtableRead();
void igLineWidthAttr_arkRegister();
void igLineWidthAttr_register();
void *igLineWidthAttr_getMetaCall();
void igLineWidthAttr_fieldInit();
void *igLightingStateAttr_getMeta();
void *igLightingStateAttr_vtableRead();
void igLightingStateAttr_arkRegister();
void igLightingStateAttr_register();
void *igLightingStateAttr_getMetaCall();
void igLightingStateAttr_fieldInit();
void *igLightStateAttrList_getMeta();
void *igLightStateAttrList_vtableRead();
void igLightStateAttrList_arkRegister();
void igLightStateAttrList_register();
void *igLightStateAttrList_getMetaCall();
void *igLightStateAttr_getMeta();
void *igLightStateAttr_vtableRead();
void igLightStateAttr_arkRegister();
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
void *fn_800B5424(){
 if(!igLightStateAttrList_meta) igLightStateAttrList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igLightStateAttrList_meta;
}
}
#pragma pop
