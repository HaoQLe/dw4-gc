#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void __dl__FPv(void *);
void *fn_800237D0();
void *fn_80024D1C();
void *meta_newMetaObject(void *);
void *fn_8002D0F4();
void *fn_800365B4();
void *fn_80053998(void *,void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_8006588C(void *,void *,void *);
void *meta_field(void *,void *);
UnknownGenFactory *fn_800658F8(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igDataList_register();
void *igMersenneTwisterRandomNumber_getMeta();
void igObjectRegistryMap_fieldInit();
void igObject_register();
extern char igDataList_vtable[];
extern char igLongStack_className[];
extern char igHistogramBase_className[];
extern char igRandomNumber_className[];
extern char igObjectRegistryMap_className[];
extern char igObjectRegistryMap_vtable[];
extern char igHistogramBase_vtable[];
extern char igLongStack_vtable[];
extern char lbl_804BCE20[];
extern char lbl_80560B70[6];
extern char igHistogramBase_dependencies[8];
extern char igHistogramBase_fieldTypes[4];
extern char igHistogramBase_fieldNames[4];
extern char igHistogramBase_fieldStorage[4];
extern char igHistogramBase_fieldOffsets[4];
extern char igObjectRegistryMap_dependencies[8];
extern void *lbl_805621F4;
extern char lbl_805659A8[1];
extern char lbl_805659A9[1];
extern void *igLongStack_meta;
extern char lbl_805659C8[4];
extern void *igHistogramBase_meta;
extern void *igRandomNumber_meta;
extern void *igObjectRegistryMap_meta;
void fn_80216620();
void *igLongStack_getMeta();
void *igLongStack_vtableRead();
void igLongStack_arkRegister();
void igLongStack_register();
void *igLongStack_getMetaCall();
void fn_802167DC();
void *igHistogramBase_getMeta();
void *igHistogramBase_vtableRead();
void igHistogramBase_arkRegister();
void igHistogramBase_register();
void *igHistogramBase_getMetaCall();
void igHistogramBase_fieldInit();
void *igRandomNumber_getMeta();
void igRandomNumber_arkRegister();
void igRandomNumber_register();
void *igRandomNumber_getMetaCall();
void *fn_80216BCC();
void *igMersenneTwisterRandomNumber_getMetaCall();
void *igObjectRegistryMap_getMeta();
void *igObjectRegistryMap_vtableRead();
void igObjectRegistryMap_arkRegister();
void igObjectRegistryMap_register();
void *igObjectRegistryMap_getMetaCall();
}
struct UnknownGenObject802166CC_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot802168D4 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot802168D4(){igObject_construct(this);}
};
struct UnknownGenObject802168D4 : UnknownGenRoot802168D4 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject802168D4(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenRoot80216C74 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80216C74(){igObject_construct(this);}
};
struct UnknownGenObject80216C74 : UnknownGenRoot80216C74 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 char unknown0C[4];
 inline ~UnknownGenObject80216C74(){unknown00=igObjectRegistryMap_vtable;}
};
extern "C" {
void *fn_80216BCC(){
 void *value0=igRandomNumber_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_abstractProxy=(void *)(void *)igMersenneTwisterRandomNumber_getMetaCall;
 return value0;
}
}
#pragma pop
