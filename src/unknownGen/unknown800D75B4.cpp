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
void igGamecubeVertexArray2_registerNow();
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
void *igGamecubeVertexArray2_getMeta(){
 if(!igGamecubeVertexArray2_meta || !(reinterpret_cast<unsigned int *>(igGamecubeVertexArray2_meta)[0x24/4]&4)) igGamecubeVertexArray2_registerNow();
 return igGamecubeVertexArray2_meta;
}
void *igGamecubeVertexArray2_vtableRead(){
 UnknownGenObject800D7610 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igVertexArray2_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown14.value=0;
 object.unknown00=igGamecubeVertexArray2_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igGamecubeVertexArray2_registerNow(){
 meta_registerNow((int)igGamecubeVertexArray2_register);
}
void igGamecubeVertexArray2_register(){
 fn_800CE2F8();
 meta_registerClass(0,(int)&igGamecubeVertexArray2_meta,(int)igVertexArray2_register,(int)igGamecubeVertexArray2_parentMeta,(int)igGamecubeVertexArray2_getMetaCall,(int)igGamecubeVertexArray2_className,24,(int)igGamecubeVertexArray2_vtableRead,(int)fn_800D7810,0,0);
}
void *igGamecubeVertexArray2_parentMeta(){return igVertexArray2_meta;}
void *fn_800D7810(){
 void *value0=igGamecubeVertexArray2_meta;
 reinterpret_cast<Meta::igMetaObject *>(value0)->_writeProxy=(void *)(void *)igVertexArray2_getMetaCall;
 return value0;
}
}
#pragma pop
