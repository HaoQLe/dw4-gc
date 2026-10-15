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
void *igGamecubeVertexStream_getMeta(){
 if(!igGamecubeVertexStream_meta || !(reinterpret_cast<unsigned int *>(igGamecubeVertexStream_meta)[0x24/4]&4)) igGamecubeVertexStream_arkRegister();
 return igGamecubeVertexStream_meta;
}
void *igGamecubeVertexStream_vtableRead(){
 UnknownGenObject800D726C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexStream_vtable;
 object.unknown14.value=0;
 object.unknown00=igGamecubeVertexStream_vtable;
 object.unknown60.value=0;
 object.unknown64.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeVertexStream_arkRegister(){
 meta_registerNow((int)igGamecubeVertexStream_register);
}
void igGamecubeVertexStream_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubeVertexStream_meta,(int)igVertexStream_register,(int)igGamecubeVertexStream_parentMeta,(int)igGamecubeVertexStream_getMetaCall,(int)igGamecubeVertexStream_className,112,(int)igGamecubeVertexStream_vtableRead,(int)fn_800D747C,(int)fn_800D75B4,(int)igGamecubeVertexStream_dependencies);
}
void *igGamecubeVertexStream_parentMeta(){return igVertexStream_meta;}
}
#pragma pop
