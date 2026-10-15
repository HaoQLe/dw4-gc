#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800CE788();
void fn_8010CBD4();
void igDependencyOrderedList_register();
void igObjectList_register();
void igObject_register();
void igRadioGroup_fieldInit();
void igView_register();
extern char igDataList_vtable[];
extern char igDependencyOrderedList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igClearRenderer_className[];
extern char igRendererOrderedList_className[];
extern char igRenderer_className[];
extern char igOnOffValueObserverList_className[];
extern char igOnOffValueObserver_className[];
extern char igRadioGroupSelectedObserver_className[];
extern char igRadioGroup_dependencies[];
extern char igRadioGroup_className[];
extern char lbl_80495AD8[];
extern char igClearRenderer_vtable[];
extern char igOnOffValueObserver_vtable[];
extern char igRadioGroupSelectedObserver_vtable[];
extern char igRadioGroup_vtable[];
extern char igOnOffValueObserverList_vtable[];
extern char lbl_80497A5C[];
extern char igRendererOrderedList_vtable[];
extern char lbl_80497BE4[];
extern char lbl_80497C9C[];
extern char igClearRenderer_fieldTypes[4];
extern char igClearRenderer_fieldNames[4];
extern char igClearRenderer_fieldStorage[4];
extern char igClearRenderer_fieldOffsets[4];
extern char igRendererOrderedList_dependencies[8];
extern char igRenderer_dependencies[8];
extern char igRenderer_fieldTypes[4];
extern char igRenderer_fieldNames[4];
extern char igRenderer_fieldStorage[4];
extern char igRenderer_fieldOffsets[4];
extern char igOnOffValueObserverList_dependencies[8];
extern char igOnOffValueObserver_dependencies[8];
extern char igOnOffValueObserver_fieldTypes[4];
extern char igOnOffValueObserver_fieldNames[4];
extern char igOnOffValueObserver_fieldStorage[4];
extern char igOnOffValueObserver_fieldOffsets[4];
extern char igRadioGroupSelectedObserver_dependencies[8];
extern char igRadioGroupSelectedObserver_fieldTypes[4];
extern char igRadioGroupSelectedObserver_fieldNames[4];
extern char igRadioGroupSelectedObserver_fieldStorage[4];
extern char igRadioGroupSelectedObserver_fieldOffsets[4];
extern void *igDependencyOrderedList_meta;
extern void *lbl_805621F4;
extern void *igView_meta;
extern void *igClearRenderer_meta;
extern void *igRendererOrderedList_meta;
extern void *igRenderer_meta;
extern void *igOnOffValueObserverList_meta;
extern void *igOnOffValueObserver_meta;
extern void *igRadioGroupSelectedObserver_meta;
extern void *igRadioGroup_meta;
void *igClearRenderer_getMeta();
void *igClearRenderer_vtableRead();
void igClearRenderer_arkRegister();
void igClearRenderer_register();
void *igClearRenderer_getMetaCall();
void *fn_8010DF8C();
void igClearRenderer_fieldInit();
void *igRendererOrderedList_getMeta();
void *igRendererOrderedList_vtableRead();
void igRendererOrderedList_arkRegister();
void igRendererOrderedList_register();
void *igRendererOrderedList_getMetaCall();
void *fn_8010E280();
void *igRenderer_getMeta();
void igRenderer_arkRegister();
void igRenderer_register();
void *igRenderer_getMetaCall();
void igRenderer_fieldInit();
void *igOnOffValueObserverList_getMeta();
void *igOnOffValueObserverList_vtableRead();
void igOnOffValueObserverList_arkRegister();
void igOnOffValueObserverList_register();
void *igOnOffValueObserverList_getMetaCall();
void *igOnOffValueObserver_getMeta();
void *igOnOffValueObserver_vtableRead();
void igOnOffValueObserver_arkRegister();
void igOnOffValueObserver_register();
void *igOnOffValueObserver_getMetaCall();
void *fn_8010E6DC();
void igOnOffValueObserver_fieldInit();
void *igRadioGroupSelectedObserver_getMeta();
void *igRadioGroupSelectedObserver_vtableRead();
void igRadioGroupSelectedObserver_arkRegister();
void igRadioGroupSelectedObserver_register();
void *igRadioGroupSelectedObserver_getMetaCall();
void igRadioGroupSelectedObserver_fieldInit();
void *fn_8010E974();
void *igRadioGroup_getMeta();
void *igRadioGroup_vtableRead();
void igRadioGroup_arkRegister();
void igRadioGroup_register();
void *igRadioGroup_getMetaCall();
}
struct UnknownGenRoot8010DE3C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010DE3C(){igObject_construct(this);}
};
struct UnknownGenObject8010DE3C_0 : UnknownGenRoot8010DE3C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject8010DE3C_0(){unknown00=lbl_80497C9C;}
};
struct UnknownGenObject8010DE3C : UnknownGenObject8010DE3C_0 {
 char unknown0C[4];
 inline ~UnknownGenObject8010DE3C(){unknown00=igClearRenderer_vtable;}
};
struct UnknownGenRoot8010E074 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E074(){igObject_construct(this);}
};
struct UnknownGenObject8010E074_0 : UnknownGenRoot8010E074 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject8010E074_0(){unknown00=igDependencyOrderedList_vtable;}
};
struct UnknownGenObject8010E074_1 : UnknownGenObject8010E074_0 {
 inline ~UnknownGenObject8010E074_1(){unknown00=lbl_80497BE4;}
};
struct UnknownGenObject8010E074 : UnknownGenObject8010E074_1 {
 char unknown18[16];
 inline ~UnknownGenObject8010E074(){unknown00=igRendererOrderedList_vtable;}
};
struct UnknownGenObject8010E474_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E5D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject8010E7E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot8010E9EC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8010E9EC(){igObject_construct(this);}
};
struct UnknownGenObject8010E9EC : UnknownGenRoot8010E9EC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 char unknown14[20];
 inline ~UnknownGenObject8010E9EC(){unknown00=igRadioGroup_vtable;}
};
extern "C" {
void *fn_8010DF8C(){return igRenderer_meta;}
}
#pragma pop
