#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80026B14();
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
void *fn_8013496C();
void igBase_register();
void igItemBase_register();
void igObjectTraversal_fieldInit();
void igObject_register();
extern char igObjectTraversal_className[];
extern char igOptConfiguration_className[];
extern char igOptBase_dependencies[];
extern char igOptBase_className[];
extern char igObjectTraversal_dependencies[];
extern char igObjectTraversal_vtable[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char igOptConfiguration_vtable[];
extern char lbl_804AAF48[];
extern char igOptBase_fieldTypes[8];
extern char igOptBase_fieldNames[8];
extern char igOptBase_fieldStorage[8];
extern char igOptBase_fieldOffsets[8];
extern void *lbl_805621F4;
extern void *igOptConfiguration_meta;
extern void *igOptBase_meta;
extern void *igObjectTraversal_meta;
extern void *igBase_meta;
void *fn_8013B7B0();
void *igOptConfiguration_getMeta();
void *igOptConfiguration_vtableRead();
void igOptConfiguration_arkRegister();
void igOptConfiguration_register();
void *igOptConfiguration_getMetaCall();
void *igOptBase_getMeta();
void igOptBase_arkRegister();
void igOptBase_register();
void *igOptBase_getMetaCall();
void *fn_8013BA10();
void igOptBase_fieldInit();
void *igObjectTraversal_getMeta();
void *igObjectTraversal_vtableRead();
void igObjectTraversal_arkRegister();
void igObjectTraversal_register();
void *igObjectTraversal_getMetaCall();
}
struct UnknownGenObject8013B828_0 {
 void *unknown00;
 char unknown04[4];
};
struct UnknownGenRoot8013BAEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BAEC(){igObject_construct(this);}
};
struct UnknownGenObject8013BAEC : UnknownGenRoot8013BAEC {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 UnknownGenRefMember unknown24;
 UnknownGenRefMember unknown28;
 char unknown2C[12];
 inline ~UnknownGenObject8013BAEC(){unknown00=igObjectTraversal_vtable;}
};
extern "C" {
void *fn_8013B7B0(){
 if(!igOptConfiguration_meta) igOptConfiguration_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igOptConfiguration_meta;
}
}
#pragma pop
