#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013EE58();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForProjectiveShadowShader_className[];
extern char igObjectPropertyForProjectiveShadowShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForProjectiveShadowShader_dependencies[8];
extern void *igObjectPropertyForProjectiveShadowShader_meta;
void *igObjectPropertyForProjectiveShadowShader_getMeta();
void *igObjectPropertyForProjectiveShadowShader_vtableRead();
void igObjectPropertyForProjectiveShadowShader_arkRegister();
void igObjectPropertyForProjectiveShadowShader_register();
void *igObjectPropertyForProjectiveShadowShader_getMetaCall();
}
struct UnknownGenRoot8013ECD0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013ECD0(){igObject_construct(this);}
};
struct UnknownGenObject8013ECD0_0 : UnknownGenRoot8013ECD0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013ECD0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013ECD0_1 : UnknownGenObject8013ECD0_0 {
 inline ~UnknownGenObject8013ECD0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013ECD0 : UnknownGenObject8013ECD0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013ECD0(){unknown00=igObjectPropertyForProjectiveShadowShader_vtable;}
};
extern "C" {
void *igObjectPropertyForProjectiveShadowShader_getMeta(){
 if(!igObjectPropertyForProjectiveShadowShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForProjectiveShadowShader_meta)[0x24/4]&4)) igObjectPropertyForProjectiveShadowShader_arkRegister();
 return igObjectPropertyForProjectiveShadowShader_meta;
}
void *igObjectPropertyForProjectiveShadowShader_vtableRead(){
 UnknownGenObject8013ECD0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForProjectiveShadowShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForProjectiveShadowShader_arkRegister(){
 meta_registerNow((int)igObjectPropertyForProjectiveShadowShader_register);
}
void igObjectPropertyForProjectiveShadowShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForProjectiveShadowShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForProjectiveShadowShader_getMetaCall,(int)igObjectPropertyForProjectiveShadowShader_className,44,(int)igObjectPropertyForProjectiveShadowShader_vtableRead,(int)fn_8013EE58,0,(int)igObjectPropertyForProjectiveShadowShader_dependencies);
}
void *igObjectPropertyForProjectiveShadowShader_getMetaCall(){return igObjectPropertyForProjectiveShadowShader_getMeta();}
}
#pragma pop
