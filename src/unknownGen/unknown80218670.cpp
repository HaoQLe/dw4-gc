#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_80216620();
void igHistogramBase_register();
void igIntHistogram_fieldInit();
void *igMatrixObject_getMeta();
void igMatrixObject_vtableRead();
void igObject_register();
extern char igMatrixObject_className[];
extern char igIntObject_className[];
extern char igIntHistogram_className[];
extern char igIntObject_vtable[];
extern char igIntHistogram_vtable[];
extern char lbl_804BC70C[];
extern char igHistogramBase_vtable[];
extern char igMatrixObject_fieldTypes[4];
extern char igMatrixObject_fieldNames[4];
extern char igMatrixObject_fieldStorage[4];
extern char igMatrixObject_fieldOffsets[4];
extern char igIntObject_fieldTypes[4];
extern char igIntObject_fieldNames[4];
extern char igIntObject_fieldStorage[4];
extern char igIntObject_fieldOffsets[4];
extern void *igHistogramBase_meta;
extern void *igMatrixObject_meta;
extern void *igIntObject_meta;
extern void *igIntHistogram_meta;
void igMatrixObject_register();
void *igMatrixObject_getMetaCall();
void igMatrixObject_fieldInit();
void *igIntObject_getMeta();
void *igIntObject_vtableRead();
void igIntObject_arkRegister();
void igIntObject_register();
void *igIntObject_getMetaCall();
void igIntObject_fieldInit();
void *igIntHistogram_getMeta();
void *igIntHistogram_vtableRead();
void igIntHistogram_arkRegister();
void igIntHistogram_register();
void *igIntHistogram_getMetaCall();
void *fn_80218670();
}
struct UnknownGenObject8021833C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot80218510 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80218510(){igObject_construct(this);}
};
struct UnknownGenObject80218510_0 : UnknownGenRoot80218510 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 inline ~UnknownGenObject80218510_0(){unknown00=igHistogramBase_vtable;}
};
struct UnknownGenObject80218510_1 : UnknownGenObject80218510_0 {
 inline ~UnknownGenObject80218510_1(){unknown00=lbl_804BC70C;}
};
struct UnknownGenObject80218510 : UnknownGenObject80218510_1 {
 char unknown0C[36];
 inline ~UnknownGenObject80218510(){unknown00=igIntHistogram_vtable;}
};
extern "C" {
void *fn_80218670(){return igHistogramBase_meta;}
}
#pragma pop
