#include <unknownGen.h>
#include <meta/igMetaObject.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80021B94();
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
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
void igGamecubeCallStackTracer_registerNow();
void igGamecubeCallStackTracer_register();
void *igGamecubeCallStackTracer_parentMeta();
void *fn_8003BE78();
}
struct UnknownGenObject8003BD5C_0 {
 void *unknown00;
 char unknown04[20];
};
extern "C" {
void *igGamecubeCallStackTracer_getMeta(){
 if(!igGamecubeCallStackTracer_meta || !(reinterpret_cast<unsigned int *>(igGamecubeCallStackTracer_meta)[0x24/4]&4)) igGamecubeCallStackTracer_registerNow();
 return igGamecubeCallStackTracer_meta;
}
void *igGamecubeCallStackTracer_vtableRead(){
 UnknownGenObject8003BD5C_0 object;
 fn_8006665C(&object);
 object.unknown00=igDataList_vtable;
 object.unknown00=lbl_80474900;
 object.unknown00=igUnsignedIntList_vtable;
 object.unknown00=igUnsignedIntListNoClean_vtable;
 object.unknown00=igCallStackTracer_vtable;
 object.unknown00=igGamecubeCallStackTracer_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeCallStackTracer_registerNow(){
 meta_registerNow((int)igGamecubeCallStackTracer_register);
}
void igGamecubeCallStackTracer_register(){
 fn_80021B94();
 meta_registerClass(0,(int)&igGamecubeCallStackTracer_meta,(int)igCallStackTracer_register,(int)igGamecubeCallStackTracer_parentMeta,(int)igGamecubeCallStackTracer_getMetaCall,(int)igGamecubeCallStackTracer_className,20,(int)igGamecubeCallStackTracer_vtableRead,(int)fn_8003BE78,0,0);
}
void *igGamecubeCallStackTracer_parentMeta(){return igCallStackTracer_meta;}
void *fn_8003BE78(){
 void *value0=igGamecubeCallStackTracer_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igCallStackTracer_getMetaCall;
 return value0;
}
int fn_8003BE8C(void *object){return *reinterpret_cast<int *>(reinterpret_cast<char *>(object)+180);}
}
#pragma pop
