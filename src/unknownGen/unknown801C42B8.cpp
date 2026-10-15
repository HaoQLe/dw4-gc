#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void *fn_80024180();
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void fn_80065DBC(int);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void fn_801DF2D4(int);
void fn_801DF2FC();
void *fn_801DF328();
void igCompiledTransform_fieldInit();
void igObjectList_register();
void igObject_register();
extern char igDataList_vtable[];
extern char igObjectList_vtable[];
extern char lbl_80476E0C[];
extern char igCompiledTransformList_className[];
extern char igCompiledTransform_dependencies[];
extern char igCompiledTransform_className[];
extern char igCompiledTransform_vtable[];
extern char igCompiledTransformList_vtable[];
extern char lbl_804B7060[];
extern char igCompiledTransformList_dependencies[8];
extern void *lbl_805621F4;
extern void *igCompiledTransformList_meta;
extern void *igCompiledTransform_meta;
void *igCompiledTransformList_getMeta();
void *igCompiledTransformList_vtableRead();
void igCompiledTransformList_arkRegister();
void igCompiledTransformList_register();
void *igCompiledTransformList_getMetaCall();
void *igCompiledTransform_getMeta();
void *igCompiledTransform_vtableRead();
void igCompiledTransform_arkRegister();
void igCompiledTransform_register();
void *igCompiledTransform_getMetaCall();
}
struct UnknownGenObject801C437C_0 {
 void *unknown00;
 char unknown04[20];
};
struct UnknownGenRoot801C4514 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C4514(){igObject_construct(this);}
};
struct UnknownGenObject801C4514 : UnknownGenRoot801C4514 {
 char unknown04[8];
 UnknownGenRefMember unknown0C;
 char unknown10[8];
 UnknownGenRefMember unknown18;
 char unknown1C[20];
 inline ~UnknownGenObject801C4514(){unknown00=igCompiledTransform_vtable;}
};
extern "C" {
void fn_801C42B8(){
 fn_801DF2FC();
 fn_80065DBC((int)fn_801DF2D4);
}
void *fn_801C42E4(){return fn_801DF328();}
void *fn_801C4304(){
 if(!igCompiledTransformList_meta) igCompiledTransformList_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCompiledTransformList_meta;
}
}
#pragma pop
