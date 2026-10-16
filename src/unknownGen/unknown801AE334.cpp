#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_8011148C();
void fn_801AA6DC();
void fn_801AE468(void *,short);
void igSorter_arkRegister();
void *fn_801C7344();
void igGroup_register();
void igPropertyKey_register();
void igPropertyValue_register();
extern char igNamedObject_vtable[];
extern char igSwitch_className[];
extern char igStringValue_className[];
extern char igStringKey_className[];
extern char igSwitch_vtable[];
extern char igStringKey_vtable[];
extern char igSorter_vtable[];
extern char igNode_vtable[];
extern char igGroup_vtable[];
extern char lbl_804B977C[];
extern char igStringValue_vtable[];
extern char lbl_804B983C[];
extern char igSwitch_dependencies[8];
extern char igSwitch_fieldTypes[4];
extern char igSwitch_fieldNames[4];
extern char igSwitch_fieldStorage[4];
extern char igSwitch_fieldOffsets[4];
extern char igStringValue_fieldTypes[4];
extern char igStringValue_fieldNames[4];
extern char igStringValue_fieldStorage[4];
extern char igStringValue_fieldOffsets[4];
extern char igStringKey_fieldTypes[4];
extern char igStringKey_fieldNames[4];
extern char igStringKey_fieldStorage[4];
extern char igStringKey_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igSwitch_meta;
extern void *igStringValue_meta;
extern void *igStringKey_meta;
extern void *igSorter_meta;
extern void *igPropertyValue_meta;
extern void *igPropertyKey_meta;
void *igSwitch_getMeta();
void *igSwitch_vtableRead();
void igSwitch_arkRegister();
void igSwitch_register();
void *igSwitch_getMetaCall();
void igSwitch_fieldInit();
void *igStringValue_getMeta();
void *igStringValue_vtableRead();
void igStringValue_arkRegister();
void igStringValue_register();
void *igStringValue_getMetaCall();
void *igStringValue_parentMeta();
void igStringValue_fieldInit();
void *igStringKey_getMeta();
void *igStringKey_vtableRead();
void igStringKey_arkRegister();
void igStringKey_register();
void *igStringKey_getMetaCall();
void *igStringKey_parentMeta();
void igStringKey_fieldInit();
}
struct UnknownGenRoot801ADC10 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADC10(){igObject_construct(this);}
};
struct UnknownGenObject801ADC10_0 : UnknownGenRoot801ADC10 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801ADC10_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801ADC10_1 : UnknownGenObject801ADC10_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801ADC10_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801ADC10_2 : UnknownGenObject801ADC10_1 {
 char unknown14[8];
 UnknownGenRefMember unknown1C;
 inline ~UnknownGenObject801ADC10_2(){unknown00=igGroup_vtable;}
};
struct UnknownGenObject801ADC10 : UnknownGenObject801ADC10_2 {
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject801ADC10(){unknown00=igSwitch_vtable;}
};
struct UnknownGenRoot801ADF48 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801ADF48(){igObject_construct(this);}
};
struct UnknownGenObject801ADF48 : UnknownGenRoot801ADF48 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801ADF48(){unknown00=igStringValue_vtable;}
};
struct UnknownGenRoot801AE178 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801AE178(){igObject_construct(this);}
};
struct UnknownGenObject801AE178 : UnknownGenRoot801AE178 {
 char unknown04[4];
 UnknownGenString unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801AE178(){unknown00=igStringKey_vtable;}
};
struct UnknownGenObject801AE3AC {
 void *unknown00;
 char unknown04[4];
 int unknown08;
 char unknown0C[4];
 int unknown10;
 int unknown14;
 int unknown18;
 int unknown1C;
 int unknown20;
 int unknown24;
 int unknown28;
 int unknown2C;
 int unknown30;
 int unknown34;
 int unknown38;
 int unknown3C;
 int unknown40;
 int unknown44;
 int unknown48;
 char unknown4C[4];
 int unknown50;
 int unknown54;
 int unknown58;
 int unknown5C;
 int unknown60;
 int unknown64;
 int unknown68;
 int unknown6C;
 char unknown70[4];
 int unknown74;
 char unknown78[24];
};
extern "C" {
void *fn_801AE334(){
 if(!igSorter_meta) igSorter_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igSorter_meta;
}
}
#pragma pop
