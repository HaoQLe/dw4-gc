#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_createInstance(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *fn_800D1DA4();
void fn_8012FC48();
void igFilterImage_fieldInit();
void igImageUtils_register();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_804930AC[];
extern char igZFilterWeightListList_className[];
extern char igZFilterWeightList_className[];
extern char igZFilterWeight_className[];
extern char igGaussianSmoothImage_className[];
extern char igSmoothImage_className[];
extern char igZoomImage_className[];
extern char igFilterImage_dependencies[];
extern char igFilterImage_className[];
extern char lbl_804A6B28[];
extern char lbl_804A6B8C[];
extern char igZoomImage_vtable[];
extern char igGaussianSmoothImage_vtable[];
extern char igZFilterWeight_vtable[];
extern char igZFilterWeightList_vtable[];
extern char lbl_804A9220[];
extern char igZFilterWeightListList_vtable[];
extern char lbl_804A92E8[];
extern char igZFilterWeightListList_dependencies[8];
extern char igZFilterWeightList_dependencies[8];
extern char igZFilterWeightList_fieldTypes[4];
extern char igZFilterWeightList_fieldNames[4];
extern char igZFilterWeightList_fieldStorage[4];
extern char igZFilterWeightList_fieldOffsets[4];
extern char igZFilterWeight_fieldTypes[8];
extern char igZFilterWeight_fieldNames[8];
extern char igZFilterWeight_fieldStorage[8];
extern char igZFilterWeight_fieldOffsets[8];
extern void *igZFilterWeightListList_meta;
extern void *igZFilterWeightList_meta;
extern void *igZFilterWeight_meta;
extern void *igGaussianSmoothImage_meta;
extern void *igSmoothImage_meta;
extern void *igZoomImage_meta;
extern void *igFilterImage_meta;
void *igZFilterWeightListList_getMeta();
void *igZFilterWeightListList_vtableRead();
void igZFilterWeightListList_arkRegister();
void igZFilterWeightListList_register();
void *igZFilterWeightListList_getMetaCall();
void *igZFilterWeightList_getMeta();
void *igZFilterWeightList_vtableRead();
void igZFilterWeightList_arkRegister();
void igZFilterWeightList_register();
void *igZFilterWeightList_getMetaCall();
void igZFilterWeightList_fieldInit();
void *igZFilterWeight_getMeta();
void *igZFilterWeight_vtableRead();
void igZFilterWeight_arkRegister();
void igZFilterWeight_register();
void *igZFilterWeight_getMetaCall();
void igZFilterWeight_fieldInit();
void *igGaussianSmoothImage_getMeta();
void *igGaussianSmoothImage_vtableRead();
void igGaussianSmoothImage_arkRegister();
void igGaussianSmoothImage_register();
void *igGaussianSmoothImage_getMetaCall();
void *igGaussianSmoothImage_parentMeta();
void *igSmoothImage_getMeta();
void igSmoothImage_arkRegister();
void igSmoothImage_register();
void *igSmoothImage_getMetaCall();
void *fn_80149688();
void *igZoomImage_getMeta();
void *igZoomImage_vtableRead();
void igZoomImage_arkRegister();
void igZoomImage_register();
void *igZoomImage_getMetaCall();
void *igFilterImage_getMeta();
void igFilterImage_arkRegister();
void igFilterImage_register();
void *igFilterImage_getMetaCall();
}
struct UnknownGenObject80148E80_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149018_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenObject80149220_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801493BC {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801493BC(){igObject_construct(this);}
};
struct UnknownGenObject801493BC_0 : UnknownGenRoot801493BC {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801493BC_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject801493BC_1 : UnknownGenObject801493BC_0 {
 inline ~UnknownGenObject801493BC_1(){unknown00=lbl_804A6B28;}
};
struct UnknownGenObject801493BC : UnknownGenObject801493BC_1 {
 char unknown14[4];
 inline ~UnknownGenObject801493BC(){unknown00=igGaussianSmoothImage_vtable;}
};
struct UnknownGenRoot80149704 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80149704(){igObject_construct(this);}
};
struct UnknownGenObject80149704_0 : UnknownGenRoot80149704 {
 char unknown04[4];
 UnknownGenRefMember unknown08;
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject80149704_0(){unknown00=lbl_804A6B8C;}
};
struct UnknownGenObject80149704 : UnknownGenObject80149704_0 {
 char unknown14[4];
 inline ~UnknownGenObject80149704(){unknown00=igZoomImage_vtable;}
};
extern "C" {
void *igGaussianSmoothImage_parentMeta(){return igSmoothImage_meta;}
}
#pragma pop
