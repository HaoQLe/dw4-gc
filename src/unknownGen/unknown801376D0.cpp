#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_80035C70();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *igImageHistogramBase_fieldInit();
void igUnsignedIntList_register();
extern char igDataList_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern char igImageHistogram_RGBA_className[];
extern char igImageHistogram_RGB_className[];
extern char igImageHistogram_LA_className[];
extern char igImageHistogramBase_dependencies[];
extern char igImageHistogramBase_className[];
extern char igImageHistogram_RGBA_vtable[];
extern char igImageHistogram_RGB_vtable[];
extern char igImageHistogram_LA_vtable[];
extern char lbl_804A404C[];
extern void *lbl_805621F4;
extern void *igImageHistogram_RGBA_meta;
extern void *igImageHistogram_RGB_meta;
extern void *igImageHistogram_LA_meta;
extern void *igImageHistogramBase_meta;
void *igImageHistogram_RGBA_getMeta();
void *igImageHistogram_RGBA_vtableRead();
void igImageHistogram_RGBA_arkRegister();
void igImageHistogram_RGBA_register();
void *igImageHistogram_RGBA_getMetaCall();
void *fn_801376D0();
void *igImageHistogram_RGB_getMeta();
void *igImageHistogram_RGB_vtableRead();
void igImageHistogram_RGB_arkRegister();
void igImageHistogram_RGB_register();
void *igImageHistogram_RGB_getMetaCall();
void *igImageHistogram_LA_getMeta();
void *igImageHistogram_LA_vtableRead();
void igImageHistogram_LA_arkRegister();
void igImageHistogram_LA_register();
void *igImageHistogram_LA_getMetaCall();
void *igImageHistogramBase_getMeta();
void igImageHistogramBase_arkRegister();
void igImageHistogramBase_register();
void *igImageHistogramBase_getMetaCall();
}
struct UnknownGenRoot8013747C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013747C(){igObject_construct(this);}
};
struct UnknownGenObject8013747C_0 : UnknownGenRoot8013747C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013747C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013747C : UnknownGenObject8013747C_0 {
 inline ~UnknownGenObject8013747C(){unknown00=igImageHistogram_RGBA_vtable;}
};
struct UnknownGenRoot8013774C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013774C(){igObject_construct(this);}
};
struct UnknownGenObject8013774C_0 : UnknownGenRoot8013774C {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject8013774C_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject8013774C : UnknownGenObject8013774C_0 {
 inline ~UnknownGenObject8013774C(){unknown00=igImageHistogram_RGB_vtable;}
};
struct UnknownGenRoot80137A14 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80137A14(){igObject_construct(this);}
};
struct UnknownGenObject80137A14_0 : UnknownGenRoot80137A14 {
 char unknown04[56];
 UnknownGenRefMember unknown3C;
 UnknownGenRefMember unknown40;
 UnknownGenRefMember unknown44;
 UnknownGenRefMember unknown48;
 UnknownGenRefMember unknown4C;
 inline ~UnknownGenObject80137A14_0(){unknown00=lbl_804A404C;}
};
struct UnknownGenObject80137A14 : UnknownGenObject80137A14_0 {
 inline ~UnknownGenObject80137A14(){unknown00=igImageHistogram_LA_vtable;}
};
extern "C" {
void *fn_801376D0(){return igImageHistogramBase_meta;}
}
#pragma pop
