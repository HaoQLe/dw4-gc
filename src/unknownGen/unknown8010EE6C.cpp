#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void fn_80053650(void *,int);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8010CBD4();
void *fn_8010CC08();
void *fn_8010D6A0();
void igEventReceiver_register();
void igGuiComponentModel_register();
void igHotKeyBinding_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igRadioGroupModel_className[];
extern char igOnOffModel_className[];
extern char igHotKeyEventReceiver_className[];
extern char igHotKeyBindingList_className[];
extern char igHotKeyBinding_className[];
extern char igModel_vtable[];
extern char igHotKeyEventReceiver_vtable[];
extern char igHotKeyBinding_vtable[];
extern char igHotKeyBindingList_vtable[];
extern char lbl_804976C0[];
extern char igEventReceiver_vtable[];
extern char igOnOffModel_vtable[];
extern char igRadioGroupModel_vtable[];
extern char igGuiComponentModel_vtable[];
extern char igRadioGroupModel_fieldTypes[4];
extern char igRadioGroupModel_fieldNames[4];
extern char igRadioGroupModel_fieldStorage[4];
extern char igRadioGroupModel_fieldOffsets[4];
extern char igOnOffModel_fieldTypes[4];
extern char igOnOffModel_fieldNames[4];
extern char igOnOffModel_fieldStorage[4];
extern char igOnOffModel_fieldOffsets[4];
extern char igModel_dependencies[8];
extern char lbl_8055EFEC[8];
extern char igModel_fieldTypes[4];
extern char igModel_fieldNames[4];
extern char igModel_fieldStorage[4];
extern char igModel_fieldOffsets[4];
extern char igHotKeyEventReceiver_dependencies[8];
extern char igHotKeyEventReceiver_fieldTypes[4];
extern char igHotKeyEventReceiver_fieldNames[4];
extern char igHotKeyEventReceiver_fieldStorage[4];
extern char igHotKeyEventReceiver_fieldOffsets[4];
extern char igHotKeyBindingList_dependencies[8];
extern char igHotKeyBinding_dependencies[8];
extern void *lbl_805621F4;
extern void *igRadioGroupModel_meta;
extern void *igOnOffModel_meta;
extern void *igModel_meta;
extern void *igHotKeyEventReceiver_meta;
extern void *igHotKeyBindingList_meta;
extern void *igHotKeyBinding_meta;
extern void *igEventReceiver_meta;
void *igRadioGroupModel_getMeta();
void *igRadioGroupModel_vtableRead();
void igRadioGroupModel_arkRegister();
void igRadioGroupModel_register();
void *igRadioGroupModel_getMetaCall();
void *fn_8010EE6C();
void igRadioGroupModel_fieldInit();
void *igOnOffModel_getMeta();
void *igOnOffModel_vtableRead();
void igOnOffModel_arkRegister();
void igOnOffModel_register();
void *igOnOffModel_getMetaCall();
void igOnOffModel_fieldInit();
void *igModel_getMeta();
void *igModel_vtableRead();
void igModel_arkRegister();
void igModel_register();
void *igModel_getMetaCall();
void igModel_fieldInit();
void *igHotKeyEventReceiver_getMeta();
void *igHotKeyEventReceiver_vtableRead();
void igHotKeyEventReceiver_arkRegister();
void igHotKeyEventReceiver_register();
void *igHotKeyEventReceiver_getMetaCall();
void *fn_8010F4FC();
void igHotKeyEventReceiver_fieldInit();
void *fn_8010F58C();
void *igHotKeyBindingList_getMeta();
void *igHotKeyBindingList_vtableRead();
void igHotKeyBindingList_arkRegister();
void igHotKeyBindingList_register();
void *igHotKeyBindingList_getMetaCall();
void *igHotKeyBinding_getMeta();
void *igHotKeyBinding_vtableRead();
void igHotKeyBinding_arkRegister();
void igHotKeyBinding_register();
void *igHotKeyBinding_getMetaCall();
}
struct UnknownGenRoot8010ED1C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010ED1C(){igObject_construct(this);}
};
struct UnknownGenObject8010ED1C_0 : UnknownGenRoot8010ED1C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010ED1C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010ED1C : UnknownGenObject8010ED1C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010ED1C(){unknown00=igRadioGroupModel_vtable;}
};
struct UnknownGenRoot8010EF2C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010EF2C(){igObject_construct(this);}
};
struct UnknownGenObject8010EF2C_0 : UnknownGenRoot8010EF2C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010EF2C_0(){unknown00=igModel_vtable;}
};
struct UnknownGenObject8010EF2C_1 : UnknownGenObject8010EF2C_0 {
 inline ~UnknownGenObject8010EF2C_1(){unknown00=igGuiComponentModel_vtable;}
};
struct UnknownGenObject8010EF2C : UnknownGenObject8010EF2C_1 {
 char unknown0C[36];
 inline ~UnknownGenObject8010EF2C(){unknown00=igOnOffModel_vtable;}
};
struct UnknownGenRoot8010F16C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F16C(){igObject_construct(this);}
};
struct UnknownGenObject8010F16C : UnknownGenRoot8010F16C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F16C(){unknown00=igModel_vtable;}
};
struct UnknownGenRoot8010F3AC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F3AC(){igObject_construct(this);}
};
struct UnknownGenObject8010F3AC : UnknownGenRoot8010F3AC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject8010F3AC(){unknown00=igHotKeyEventReceiver_vtable;}
};
struct UnknownGenObject8010F604_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010F79C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010F79C(){igObject_construct(this);}
};
struct UnknownGenObject8010F79C : UnknownGenRoot8010F79C {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 char unknown14[12];
 inline ~UnknownGenObject8010F79C(){unknown00=igHotKeyBinding_vtable;}
};
extern "C" {
void *fn_8010EE6C(){return igModel_meta;}
}
#pragma pop
