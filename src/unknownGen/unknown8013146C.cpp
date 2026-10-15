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
void fn_8012FC48();
void igGenericAttrStatistics_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igAllNodeStatistics_className[];
extern char igAllAttrStatistics_className[];
extern char igGenericAttrStatisticsList_className[];
extern char igGenericNodeStatisticsList_className[];
extern char igGenericAttrStatistics_dependencies[];
extern char igGenericAttrStatistics_className[];
extern char igAllNodeStatistics_vtable[];
extern char igAllAttrStatistics_vtable[];
extern char igGenericAttrStatistics_vtable[];
extern char igGenericNodeStatisticsList_vtable[];
extern char lbl_804AAA70[];
extern char igGenericAttrStatisticsList_vtable[];
extern char lbl_804AAB38[];
extern char igAllNodeStatistics_dependencies[8];
extern char igAllNodeStatistics_fieldTypes[4];
extern char igAllNodeStatistics_fieldNames[4];
extern char igAllNodeStatistics_fieldStorage[4];
extern char igAllNodeStatistics_fieldOffsets[4];
extern char igAllAttrStatistics_dependencies[8];
extern char igAllAttrStatistics_fieldTypes[4];
extern char igAllAttrStatistics_fieldNames[4];
extern char igAllAttrStatistics_fieldStorage[4];
extern char igAllAttrStatistics_fieldOffsets[4];
extern char igGenericAttrStatisticsList_dependencies[8];
extern char igGenericNodeStatisticsList_dependencies[8];
extern void *lbl_805621F4;
extern void *igAllNodeStatistics_meta;
extern void *igAllAttrStatistics_meta;
extern void *igGenericAttrStatisticsList_meta;
extern void *igGenericNodeStatisticsList_meta;
extern void *igGenericAttrStatistics_meta;
void *igAllNodeStatistics_getMeta();
void *igAllNodeStatistics_vtableRead();
void igAllNodeStatistics_arkRegister();
void igAllNodeStatistics_register();
void *igAllNodeStatistics_getMetaCall();
void igAllNodeStatistics_fieldInit();
void *igAllAttrStatistics_getMeta();
void *igAllAttrStatistics_vtableRead();
void igAllAttrStatistics_arkRegister();
void igAllAttrStatistics_register();
void *igAllAttrStatistics_getMetaCall();
void igAllAttrStatistics_fieldInit();
void *fn_801316B0();
void *igGenericAttrStatisticsList_getMeta();
void *igGenericAttrStatisticsList_vtableRead();
void igGenericAttrStatisticsList_arkRegister();
void igGenericAttrStatisticsList_register();
void *igGenericAttrStatisticsList_getMetaCall();
void *fn_8013184C();
void *igGenericNodeStatisticsList_getMeta();
void *igGenericNodeStatisticsList_vtableRead();
void igGenericNodeStatisticsList_arkRegister();
void igGenericNodeStatisticsList_register();
void *igGenericNodeStatisticsList_getMetaCall();
void *igGenericAttrStatistics_getMeta();
void *igGenericAttrStatistics_vtableRead();
void igGenericAttrStatistics_arkRegister();
void igGenericAttrStatistics_register();
void *igGenericAttrStatistics_getMetaCall();
}
struct UnknownGenRoot801312A0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801312A0(){igObject_construct(this);}
};
struct UnknownGenObject801312A0 : UnknownGenRoot801312A0 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801312A0(){unknown00=igAllNodeStatistics_vtable;}
};
struct UnknownGenRoot801314E4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801314E4(){igObject_construct(this);}
};
struct UnknownGenObject801314E4 : UnknownGenRoot801314E4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject801314E4(){unknown00=igAllAttrStatistics_vtable;}
};
struct UnknownGenObject80131728_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject801318C4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80131A5C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80131A5C(){igObject_construct(this);}
};
struct UnknownGenObject80131A5C : UnknownGenRoot80131A5C {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 char unknown10[16];
 inline ~UnknownGenObject80131A5C(){unknown00=igGenericAttrStatistics_vtable;}
};
extern "C" {
void *fn_8013146C(){
 if(!igAllAttrStatistics_meta) igAllAttrStatistics_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igAllAttrStatistics_meta;
}
}
#pragma pop
