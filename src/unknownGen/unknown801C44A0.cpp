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
void *igCompiledTransform_create(void *object){
 igCompiledTransform_arkRegister();
 return meta_createInstance(igCompiledTransform_meta,object);
}
void *igCompiledTransform_getMeta(){
 if(!igCompiledTransform_meta || !(reinterpret_cast<unsigned int *>(igCompiledTransform_meta)[0x24/4]&4)) igCompiledTransform_arkRegister();
 return igCompiledTransform_meta;
}
void *igCompiledTransform_vtableRead(){
 UnknownGenObject801C4514 object;
 object.unknown00=igCompiledTransform_vtable;
 object.unknown0C.value=0;
 object.unknown18.value=0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igCompiledTransform_arkRegister(){
 meta_registerNow((int)igCompiledTransform_register);
}
void igCompiledTransform_register(){
 fn_801AA6DC();
 meta_registerClass(0,(int)&igCompiledTransform_meta,(int)igObject_register,(int)fn_800237D0,(int)igCompiledTransform_getMetaCall,(int)igCompiledTransform_className,36,(int)igCompiledTransform_vtableRead,(int)igCompiledTransform_fieldInit,0,(int)igCompiledTransform_dependencies);
}
void *igCompiledTransform_getMetaCall(){return igCompiledTransform_getMeta();}
}
#pragma pop
