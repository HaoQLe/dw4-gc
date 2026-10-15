#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void fn_800D747C();
void *fn_800D75B4();
void *igGamecubeVertexStream_getMetaCall();
void igVertexStream_register();
extern char igNamedObject_vtable[];
extern char igGamecubeVertexStream_className[];
extern char igGamecubeVertexStream_vtable[];
extern char igVertexStream_vtable[];
extern char igGamecubeVertexStream_dependencies[8];
extern void *igVertexStream_meta;
extern void *igGamecubeVertexStream_meta;
void *igGamecubeVertexStream_vtableRead();
void igGamecubeVertexStream_arkRegister();
void igGamecubeVertexStream_register();
void *igGamecubeVertexStream_parentMeta();
}
struct UnknownGenRoot800D726C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D726C(){igObject_construct(this);}
};
struct UnknownGenObject800D726C_0 : UnknownGenRoot800D726C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D726C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D726C_1 : UnknownGenObject800D726C_0 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800D726C_1(){unknown00=igVertexStream_vtable;}
};
struct UnknownGenObject800D726C : UnknownGenObject800D726C_1 {
 char unknown18[72];
 UnknownGenRefMember unknown60;
 UnknownGenRefMember unknown64;
 char unknown68[16];
 inline ~UnknownGenObject800D726C(){unknown00=igGamecubeVertexStream_vtable;}
};
extern "C" {
void *igGamecubeVertexStream_parentMeta(){return igVertexStream_meta;}
}
#pragma pop
