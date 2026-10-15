#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80023CF4();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *fn_800635C8(void *,void *,void *,int);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *igGamecubeVertexStream_getMeta();
void igNamedObject_register();
void igObjectList_register();
void igVertexData_fieldInit();
extern char igDataList_vtable[];
extern char igNamedObject_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char lbl_80480EC0[];
extern char igVertexDataList_className[];
extern char igVertexData_className[];
extern char igVertexData_vtable[];
extern char igVertexDataList_vtable[];
extern char lbl_804940EC[];
extern char igVertexDataList_dependencies[8];
extern char igVertexData_dependencies[8];
extern void *lbl_805621F4;
extern void *igVertexDataList_meta;
extern void *lbl_80562DBC;
extern void *igVertexData_meta;
void *igVertexDataList_getMeta();
void *igVertexDataList_vtableRead();
void igVertexDataList_arkRegister();
void igVertexDataList_register();
void *igVertexDataList_getMetaCall();
void *igVertexData_getMeta();
void *igVertexData_vtableRead();
void igVertexData_arkRegister();
void igVertexData_register();
void *igVertexData_getMetaCall();
}
struct UnknownGenObject800CF750_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot800CF970 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800CF970(){igObject_construct(this);}
};
struct UnknownGenObject800CF970_0 : UnknownGenRoot800CF970 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800CF970_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800CF970 : UnknownGenObject800CF970_0 {
 UnknownGenRefMember unknown0C;
 char unknown10[32];
 inline ~UnknownGenObject800CF970(){unknown00=igVertexData_vtable;}
};
extern "C" {
void *fn_800CF6D8(){
 if(!igVertexDataList_meta) igVertexDataList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igVertexDataList_meta;
}
}
#pragma pop
