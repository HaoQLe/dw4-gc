#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *meta_newMetaObject(void *);
void *fn_800607F4(void *);
void *meta_createInstance(void *,void *);
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_801AA6DC();
void *fn_801BBBF0();
void igCamera_fieldInit();
void igNode_register();
extern char igNamedObject_vtable[];
extern char igCamera_className[];
extern char igNode_vtable[];
extern char igCamera_vtable[];
extern void *lbl_805621F4;
extern void *igCamera_meta;
void *igCamera_getMeta();
void *igCamera_vtableRead();
void igCamera_arkRegister();
void igCamera_register();
void *igCamera_getMetaCall();
}
struct UnknownGenRoot801C5EB0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot801C5EB0(){igObject_construct(this);}
};
struct UnknownGenObject801C5EB0_0 : UnknownGenRoot801C5EB0 {
 char unknown04[4];
 UnknownGenString unknown08;
 inline ~UnknownGenObject801C5EB0_0(){unknown00=igNamedObject_vtable;}
};
struct UnknownGenObject801C5EB0_1 : UnknownGenObject801C5EB0_0 {
 UnknownGenRefMember unknown0C;
 UnknownGenRefMember unknown10;
 inline ~UnknownGenObject801C5EB0_1(){unknown00=igNode_vtable;}
};
struct UnknownGenObject801C5EB0 : UnknownGenObject801C5EB0_1 {
 char unknown14[36];
 inline ~UnknownGenObject801C5EB0(){unknown00=igCamera_vtable;}
};
extern "C" {
void *igCamera_create(void *object){
 igCamera_arkRegister();
 return meta_createInstance(igCamera_meta,object);
}
void *fn_801C5E38(){
 if(!igCamera_meta) igCamera_meta=meta_newMetaObject(fn_800607F4(lbl_805621F4));
 return igCamera_meta;
}
void *igCamera_getMeta(){
 if(!igCamera_meta || !(reinterpret_cast<unsigned int *>(igCamera_meta)[0x24/4]&4)) igCamera_arkRegister();
 return igCamera_meta;
}
void *igCamera_vtableRead(){
 UnknownGenObject801C5EB0 object;
 object.unknown00=igNamedObject_vtable;
 object.unknown08.value=0;
 object.unknown00=igNode_vtable;
 object.unknown0C.value=0;
 object.unknown10.value=0;
 object.unknown00=igCamera_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCamera_arkRegister(){
 meta_registerNow((int)igCamera_register);
}
void igCamera_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCamera_meta,(int)igNode_register,(int)fn_801BBBF0,(int)igCamera_getMetaCall,(int)igCamera_className,56,(int)igCamera_vtableRead,(int)igCamera_fieldInit,0,0);
}
void *igCamera_getMetaCall(){return igCamera_getMeta();}
}
#pragma pop
