#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igMorphSequenceData_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igMorphSequenceDataList_className[];
extern char igMorphSequenceData_dependencies[];
extern char igMorphSequenceData_className[];
extern char igMorphSequenceData_vtable[];
extern char igMorphSequenceDataList_vtable[];
extern char lbl_804B7D78[];
extern char igMorphSequenceDataList_dependencies[8];
extern void *lbl_805621F4;
extern void *igMorphSequenceDataList_meta;
extern void *igMorphSequenceData_meta;
void *igMorphSequenceDataList_getMeta();
void *igMorphSequenceDataList_vtableRead();
void igMorphSequenceDataList_arkRegister();
void igMorphSequenceDataList_register();
void *igMorphSequenceDataList_getMetaCall();
void *igMorphSequenceData_getMeta();
void *igMorphSequenceData_vtableRead();
void igMorphSequenceData_arkRegister();
void igMorphSequenceData_register();
void *igMorphSequenceData_getMetaCall();
}
struct UnknownGenObject801B9678_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801B97D8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801B97D8(){igObject_construct(this);}
};
struct UnknownGenObject801B97D8 : UnknownGenRoot801B97D8 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[16];
 inline ~UnknownGenObject801B97D8(){unknown00=igMorphSequenceData_vtable;}
};
extern "C" {
void *fn_801B9600(){
 if(!igMorphSequenceDataList_meta) igMorphSequenceDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMorphSequenceDataList_meta;
}
}
#pragma pop
