#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void *igCallStackTracer_getMetaCall();
void igCallStackTracer_register();
void *igGamecubeCallStackTracer_getMetaCall();
extern char igGamecubeCallStackTracer_className[];
extern char igGamecubeCallStackTracer_vtable[];
extern char igDataList_vtable[];
extern char igCallStackTracer_vtable[];
extern char igUnsignedIntListNoClean_vtable[];
extern char igUnsignedIntList_vtable[];
extern char lbl_80474900[];
extern void *igCallStackTracer_meta;
extern void *igGamecubeCallStackTracer_meta;
void *igGamecubeCallStackTracer_vtableRead();
void igGamecubeCallStackTracer_arkRegister();
void igGamecubeCallStackTracer_register();
void *igGamecubeCallStackTracer_parentMeta();
void *fn_8003BE78();
}
struct UnknownGenObject8003BD5C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeCallStackTracer_parentMeta(){return igCallStackTracer_meta;}
void *fn_8003BE78(){
 void *value0=igGamecubeCallStackTracer_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igCallStackTracer_getMetaCall;
 return value0;
}
int fn_8003BE8C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+180);}
}
#pragma pop
