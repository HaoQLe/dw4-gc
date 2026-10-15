#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void igCamera_register();
void igDOFCamera_fieldInit();
extern char igNamedObject_vtable[];
extern char igDOFCamera_className[];
extern char igNode_vtable[];
extern char igDOFCamera_vtable[];
extern char igCamera_vtable[];
extern char igDOFCamera_dependencies[8];
extern void *igDOFCamera_meta;
extern void *igCamera_meta;
void *igDOFCamera_getMeta();
void *igDOFCamera_vtableRead();
void igDOFCamera_arkRegister();
void igDOFCamera_register();
void *igDOFCamera_getMetaCall();
void *igDOFCamera_parentMeta();
}
struct UnknownGenRoot801C5B4C {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5B4C(){igObject_construct(this);}
};
struct UnknownGenObject801C5B4C_0 : UnknownGenRoot801C5B4C {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C5B4C_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C5B4C_1 : UnknownGenObject801C5B4C_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C5B4C_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801C5B4C_2 : UnknownGenObject801C5B4C_1 {
 inline ~UnknownGenObject801C5B4C_2(){unknown00=igCamera_vtable;}
};
struct UnknownGenObject801C5B4C : UnknownGenObject801C5B4C_2 {
 char unknown14[52];
 inline ~UnknownGenObject801C5B4C(){unknown00=igDOFCamera_vtable;}
};
extern "C" {
void *igDOFCamera_parentMeta(){return igCamera_meta;}
}
#pragma pop
