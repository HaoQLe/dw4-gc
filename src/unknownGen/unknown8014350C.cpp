#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
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
void fn_80075AC4(void *,int);
void fn_8012FC48();
void *fn_8012FEB0();
void *fn_8013BA10();
void igBase_register();
void igIterateObject_fieldInit();
void igObjectList_register();
void igObject_register();
void igOptVisitObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igListenerListList_className[];
extern char igListenerList_className[];
extern char igListenerBase_className[];
extern char igLimitActorBlendPalettes_className[];
extern char igIterator_className[];
extern char igIterateObject_dependencies[];
extern char igIterateObject_className[];
extern char lbl_804A46AC[];
extern char lbl_804A4A04[];
extern char igLimitActorBlendPalettes_vtable[];
extern char lbl_804A6460[];
extern char igIterateObject_vtable[];
extern char lbl_804A9C44[];
extern char igListenerList_vtable[];
extern char lbl_804A9D04[];
extern char igListenerListList_vtable[];
extern char lbl_804A9DCC[];
extern char igListenerBase_vtable[];
extern char lbl_804AAF48[];
extern char igListenerListList_dependencies[8];
extern char igListenerList_dependencies[8];
extern char igLimitActorBlendPalettes_fieldTypes[4];
extern char igLimitActorBlendPalettes_fieldNames[4];
extern char igLimitActorBlendPalettes_fieldStorage[4];
extern char igLimitActorBlendPalettes_fieldOffsets[4];
extern void *lbl_805621F4;
extern void *igListenerListList_meta;
extern void *igListenerList_meta;
extern void *igListenerBase_meta;
extern void *igLimitActorBlendPalettes_meta;
extern void *igIterator_meta;
extern void *igIterateObject_meta;
void *igListenerListList_getMeta();
void *igListenerListList_vtableRead();
void igListenerListList_arkRegister();
void igListenerListList_register();
void *igListenerListList_getMetaCall();
void *igListenerList_getMeta();
void *igListenerList_vtableRead();
void igListenerList_arkRegister();
void igListenerList_register();
void *igListenerList_getMetaCall();
void *igListenerBase_getMeta();
void *igListenerBase_vtableRead();
void igListenerBase_arkRegister();
void igListenerBase_register();
void *igListenerBase_getMetaCall();
void *igLimitActorBlendPalettes_getMeta();
void *igLimitActorBlendPalettes_vtableRead();
void igLimitActorBlendPalettes_arkRegister();
void igLimitActorBlendPalettes_register();
void *igLimitActorBlendPalettes_getMetaCall();
void igLimitActorBlendPalettes_fieldInit();
void *igIterator_getMeta();
void igIterator_arkRegister();
void igIterator_register();
void *igIterator_getMetaCall();
void *igIterateObject_getMeta();
void *igIterateObject_vtableRead();
void igIterateObject_arkRegister();
void igIterateObject_register();
void *igIterateObject_getMetaCall();
void *fn_80143FCC();
}
struct UnknownGenObject80143584_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801436E4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80143844_0 {
 void *unknown00;
 char unknown04[36];
};
struct UnknownGenRoot80143988 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143988(){igObject_construct(this);}
};
struct UnknownGenObject80143988_0 : UnknownGenRoot80143988 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 inline ~UnknownGenObject80143988_0(){unknown00=lbl_804A4A04;}
};
struct UnknownGenObject80143988_1 : UnknownGenObject80143988_0 {
 UnknownGenRefMember unknown28;
 inline ~UnknownGenObject80143988_1(){unknown00=lbl_804A46AC;}
};
struct UnknownGenObject80143988 : UnknownGenObject80143988_1 {
 char unknown2C[12];
 inline ~UnknownGenObject80143988(){unknown00=igLimitActorBlendPalettes_vtable;}
};
struct UnknownGenRoot80143D58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80143D58(){igObject_construct(this);}
};
struct UnknownGenObject80143D58 : UnknownGenRoot80143D58 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenString unknown0C;
 char unknown10[4];
 UnknownGenRefMember unknown14;
 UnknownGenRefMember unknown18;
 UnknownGenRefMember unknown1C;
 UnknownGenRefMember unknown20;
 char unknown24[12];
 inline ~UnknownGenObject80143D58(){unknown00=igIterateObject_vtable;}
};
extern "C" {
void *fn_8014350C(){
 if(!igListenerListList_meta) igListenerListList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igListenerListList_meta;
}
}
#pragma pop
