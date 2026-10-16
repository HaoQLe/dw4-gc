#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void *fn_800284EC();
void *meta_newMetaObject(void *);
void *fn_8002B558();
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void *meta_field(void *,void *);
void meta_appendFields(void *,void *,int);
void meta_setupFields(void *,void *,void *,void *,void *);
void *meta_fieldCount(void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void igInfo_register();
void igMemoryPool_register();
extern char igMemoryPoolContextInfo_className[];
extern char igMemoryPoolContextInfo_vtable[];
extern char igInfo_vtable[];
extern char igNamedObject_vtable[];
extern char igMemoryPoolContextInfo_dependencies[8];
extern char igMemoryPoolContextInfo_fieldTypes[4];
extern char igMemoryPoolContextInfo_fieldNames[4];
extern char igMemoryPoolContextInfo_fieldStorage[4];
extern char igMemoryPoolContextInfo_fieldOffsets[4];
extern void *igMemoryPoolContextInfo_meta;
extern void *igMemoryPool_meta;
extern void *lbl_805621F4;
void *igMemoryPoolContextInfo_getMeta();
void *igMemoryPoolContextInfo_vtableRead();
void igMemoryPoolContextInfo_arkRegister();
void igMemoryPoolContextInfo_register();
void *igMemoryPoolContextInfo_getMetaCall();
void igMemoryPoolContextInfo_fieldInit();
void igMemoryPool_arkRegister();
}
struct UnknownGenRoot8002BC94 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8002BC94(){igObject_construct(this);}
};
struct UnknownGenObject8002BC94_0 : UnknownGenRoot8002BC94 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject8002BC94_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject8002BC94_1 : UnknownGenObject8002BC94_0 {
 inline ~UnknownGenObject8002BC94_1(){unknown00=igInfo_vtable;}
};
struct UnknownGenObject8002BC94 : UnknownGenObject8002BC94_1 {
 char unknown0C[8];
 UnknownGenRefMember unknown14;
 char unknown18[8];
 inline ~UnknownGenObject8002BC94(){unknown00=igMemoryPoolContextInfo_vtable;}
};
extern "C" {
void *fn_8002BED0(){
 if(!igMemoryPool_meta) igMemoryPool_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igMemoryPool_meta;
}
}
#pragma pop
