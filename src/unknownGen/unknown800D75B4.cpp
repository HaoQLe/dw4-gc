#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_800CE2F8();
void *fn_8010307C();
void *igGamecubeVertexArray2_getMetaCall();
void *igVertexArray2_getMetaCall();
void igVertexArray2_register();
extern char igNamedObject_vtable[];
extern char igGamecubeVertexArray2_className[];
extern char igGamecubeVertexArray2_vtable[];
extern char igVertexArray2_vtable[];
extern void *igVertexArray2_meta;
extern void *igGamecubeVertexArray2_meta;
void *igGamecubeVertexArray2_vtableRead();
void igGamecubeVertexArray2_arkRegister();
void igGamecubeVertexArray2_register();
void *igGamecubeVertexArray2_parentMeta();
void *fn_800D7810();
}
struct UnknownGenRoot800D7610 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot800D7610(){igObject_construct(this);}
};
struct UnknownGenObject800D7610_0 : UnknownGenRoot800D7610 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject800D7610_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject800D7610_1 : UnknownGenObject800D7610_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 UnknownGenRefMember unknown14;
 inline ~UnknownGenObject800D7610_1(){unknown00=igVertexArray2_vtable;}
};
struct UnknownGenObject800D7610 : UnknownGenObject800D7610_1 {
 inline ~UnknownGenObject800D7610(){unknown00=igGamecubeVertexArray2_vtable;}
};
extern "C" {
void *fn_800D75B4(){return fn_8010307C();}
}
#pragma pop
