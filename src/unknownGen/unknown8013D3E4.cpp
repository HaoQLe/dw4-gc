#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D5A8();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForEnvironmentMapShader_className[];
extern char igObjectPropertyForEnvironmentMapShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F850[8];
extern void *igObjectPropertyForEnvironmentMapShader_meta;
void *igObjectPropertyForEnvironmentMapShader_getMeta();
void *igObjectPropertyForEnvironmentMapShader_vtableRead();
void igObjectPropertyForEnvironmentMapShader_registerNow();
void igObjectPropertyForEnvironmentMapShader_register();
void *igObjectPropertyForEnvironmentMapShader_getMetaCall();
}
struct UnknownGenRoot8013D420 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D420(){igObject_construct(this);}
};
struct UnknownGenObject8013D420_0 : UnknownGenRoot8013D420 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D420_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D420_1 : UnknownGenObject8013D420_0 {
 inline ~UnknownGenObject8013D420_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013D420 : UnknownGenObject8013D420_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D420(){unknown00=igObjectPropertyForEnvironmentMapShader_vtable;}
};
extern "C" {
void *igObjectPropertyForEnvironmentMapShader_getMeta(){
 if(!igObjectPropertyForEnvironmentMapShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForEnvironmentMapShader_meta)[0x24/4]&4)) igObjectPropertyForEnvironmentMapShader_registerNow();
 return igObjectPropertyForEnvironmentMapShader_meta;
}
void *igObjectPropertyForEnvironmentMapShader_vtableRead(){
 UnknownGenObject8013D420 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForEnvironmentMapShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForEnvironmentMapShader_registerNow(){
 meta_registerNow((int)igObjectPropertyForEnvironmentMapShader_register);
}
void igObjectPropertyForEnvironmentMapShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForEnvironmentMapShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForEnvironmentMapShader_getMetaCall,(int)igObjectPropertyForEnvironmentMapShader_className,44,(int)igObjectPropertyForEnvironmentMapShader_vtableRead,(int)fn_8013D5A8,0,(int)lbl_8055F850);
}
void *igObjectPropertyForEnvironmentMapShader_getMetaCall(){return igObjectPropertyForEnvironmentMapShader_getMeta();}
}
#pragma pop
