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
void *igDOFCamera_getMeta(){
 if(!igDOFCamera_meta || !(reinterpret_cast<unsigned int *>(igDOFCamera_meta)[0x24/4]&4)) igDOFCamera_arkRegister();
 return igDOFCamera_meta;
}
void *igDOFCamera_vtableRead(){
 UnknownGenObject801C5B4C object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igCamera_vtable;
 object.unknown00=igDOFCamera_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igDOFCamera_arkRegister(){
 meta_registerNow((int)igDOFCamera_register);
}
void igDOFCamera_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igDOFCamera_meta,(int)igCamera_register,(int)igDOFCamera_parentMeta,(int)igDOFCamera_getMetaCall,(int)igDOFCamera_className,68,(int)igDOFCamera_vtableRead,(int)igDOFCamera_fieldInit,0,(int)igDOFCamera_dependencies);
}
void *igDOFCamera_getMetaCall(){return igDOFCamera_getMeta();}
void *igDOFCamera_parentMeta(){return igCamera_meta;}
}
#pragma pop
