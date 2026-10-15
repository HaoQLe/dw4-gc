#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E968();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForCompiledGraph_className[];
extern char igObjectPropertyForCompiledGraph_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForCompiledGraph_dependencies[8];
extern void *igObjectPropertyForCompiledGraph_meta;
void *igObjectPropertyForCompiledGraph_getMeta();
void *igObjectPropertyForCompiledGraph_vtableRead();
void igObjectPropertyForCompiledGraph_arkRegister();
void igObjectPropertyForCompiledGraph_register();
void *igObjectPropertyForCompiledGraph_getMetaCall();
}
struct UnknownGenRoot8013E7E0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E7E0(){igObject_construct(this);}
};
struct UnknownGenObject8013E7E0_0 : UnknownGenRoot8013E7E0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E7E0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E7E0_1 : UnknownGenObject8013E7E0_0 {
 inline ~UnknownGenObject8013E7E0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013E7E0 : UnknownGenObject8013E7E0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E7E0(){unknown00=igObjectPropertyForCompiledGraph_vtable;}
};
extern "C" {
void *igObjectPropertyForCompiledGraph_getMeta(){
 if(!igObjectPropertyForCompiledGraph_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForCompiledGraph_meta)[0x24/4]&4)) igObjectPropertyForCompiledGraph_arkRegister();
 return igObjectPropertyForCompiledGraph_meta;
}
void *igObjectPropertyForCompiledGraph_vtableRead(){
 UnknownGenObject8013E7E0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForCompiledGraph_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForCompiledGraph_arkRegister(){
 meta_registerNow((int)igObjectPropertyForCompiledGraph_register);
}
void igObjectPropertyForCompiledGraph_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForCompiledGraph_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForCompiledGraph_getMetaCall,(int)igObjectPropertyForCompiledGraph_className,44,(int)igObjectPropertyForCompiledGraph_vtableRead,(int)fn_8013E968,0,(int)igObjectPropertyForCompiledGraph_dependencies);
}
void *igObjectPropertyForCompiledGraph_getMetaCall(){return igObjectPropertyForCompiledGraph_getMeta();}
}
#pragma pop
