#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DA98();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForCartoonShader_className[];
extern char igObjectPropertyForCartoonShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForCartoonShader_dependencies[8];
extern void *igObjectPropertyForCartoonShader_meta;
void *igObjectPropertyForCartoonShader_getMeta();
void *igObjectPropertyForCartoonShader_vtableRead();
void igObjectPropertyForCartoonShader_arkRegister();
void igObjectPropertyForCartoonShader_register();
void *igObjectPropertyForCartoonShader_getMetaCall();
}
struct UnknownGenRoot8013D910 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D910(){igObject_construct(this);}
};
struct UnknownGenObject8013D910_0 : UnknownGenRoot8013D910 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D910_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D910_1 : UnknownGenObject8013D910_0 {
 inline ~UnknownGenObject8013D910_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013D910 : UnknownGenObject8013D910_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D910(){unknown00=igObjectPropertyForCartoonShader_vtable;}
};
extern "C" {
void *igObjectPropertyForCartoonShader_getMeta(){
 if(!igObjectPropertyForCartoonShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForCartoonShader_meta)[0x24/4]&4)) igObjectPropertyForCartoonShader_arkRegister();
 return igObjectPropertyForCartoonShader_meta;
}
void *igObjectPropertyForCartoonShader_vtableRead(){
 UnknownGenObject8013D910 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForCartoonShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForCartoonShader_arkRegister(){
 meta_registerNow((int)igObjectPropertyForCartoonShader_register);
}
void igObjectPropertyForCartoonShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForCartoonShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForCartoonShader_getMetaCall,(int)igObjectPropertyForCartoonShader_className,44,(int)igObjectPropertyForCartoonShader_vtableRead,(int)fn_8013DA98,0,(int)igObjectPropertyForCartoonShader_dependencies);
}
void *igObjectPropertyForCartoonShader_getMetaCall(){return igObjectPropertyForCartoonShader_getMeta();}
}
#pragma pop
