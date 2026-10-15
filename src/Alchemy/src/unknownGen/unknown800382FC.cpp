#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800237D0();
void *meta_newMetaObject(void *);
void igCharMetaField_arkRegister();
void fn_8003FF90(void *);
void fn_80053650(void *,int);
void fn_80053E6C(void *,void *);
void *fn_800607F4(void *);
void *fn_80063B5C();
void fn_80063F14(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igCallStackTable_fieldInit();
void *igCharMetaField_getMeta();
void igCharMetaField_register();
void *igGamecubeCallStackTracer_getMeta();
void igObject_register();
void igUnsignedIntListNoClean_register();
extern char igCharArrayMetaField_className[];
extern char igCallStackTracer_className[];
extern char igCallStackTable_dependencies[];
extern char igCallStackTable_className[];
extern char lbl_80471914[];
extern char igDataList_vtable[];
extern char igCharArrayMetaField_vtable[];
extern char igCallStackTracer_vtable[];
extern char igCallStackTable_vtable[];
extern char lbl_80473F24[];
extern char igUnsignedIntListNoClean_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern char igCharArrayMetaField_dependencies[8];
extern char igCharArrayMetaField_fieldTypes[4];
extern char igCharArrayMetaField_fieldNames[4];
extern char igCharArrayMetaField_fieldStorage[4];
extern char igCharArrayMetaField_fieldOffsets[4];
extern void *igUnsignedIntListNoClean_meta;
extern void *igCharMetaField_meta;
extern void *lbl_80561E20;
extern void *igCharArrayMetaField_meta;
extern void *lbl_80561E28;
extern void *igCallStackTracer_meta;
extern void *igCallStackTable_meta;
extern void *lbl_805621F4;
void *igCharArrayMetaField_getMeta();
void *igCharArrayMetaField_vtableRead();
void igCharArrayMetaField_arkRegister();
void igCharArrayMetaField_register();
void *igCharArrayMetaField_getMetaCall();
void *igCharArrayMetaField_parentMeta();
void igCharArrayMetaField_fieldInit();
void *igCallStackTracer_getMeta();
void *igCallStackTracer_vtableRead();
void igCallStackTracer_arkRegister();
void igCallStackTracer_register();
void *igCallStackTracer_getMetaCall();
void *igCallStackTracer_parentMeta();
void *fn_80038304();
void *igGamecubeCallStackTracer_getMetaCall();
void *igCallStackTable_getMeta();
void *igCallStackTable_vtableRead();
void igCallStackTable_arkRegister();
void igCallStackTable_register();
void *igCallStackTable_getMetaCall();
}
struct UnknownGenRoot80037EEC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80037EEC(){fn_8003FF90(this);}
};
struct UnknownGenObject80037EEC_0 : UnknownGenRoot80037EEC {
 char unknown04[8];
 UnknownGenString unknown0C;
 inline ~UnknownGenObject80037EEC_0(){unknown00=lbl_80471914;}
};
struct UnknownGenObject80037EEC_1 : UnknownGenObject80037EEC_0 {
 inline ~UnknownGenObject80037EEC_1(){unknown00=lbl_80473F24;}
};
struct UnknownGenObject80037EEC : UnknownGenObject80037EEC_1 {
 char unknown10[48];
 inline ~UnknownGenObject80037EEC(){unknown00=igCharArrayMetaField_vtable;}
};
struct UnknownGenObject800381D4_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800383B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800383B0(){igObject_construct(this);}
};
struct UnknownGenObject800383B0 : UnknownGenRoot800383B0 {
 char unknown04[12];
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject800383B0(){unknown00=igCallStackTable_vtable;}
};
extern "C" {
void *igCallStackTracer_parentMeta(){return igUnsignedIntListNoClean_meta;}
void *fn_80038304(){
 void *value0=igCallStackTracer_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igGamecubeCallStackTracer_getMetaCall;
 return value0;
}
}
#pragma pop
