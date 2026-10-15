#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C1E8();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForShader_className[];
extern char igObjectPropertyForShader_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F810[8];
extern void *igObjectPropertyForShader_meta;
void *igObjectPropertyForShader_getMeta();
void *igObjectPropertyForShader_vtableRead();
void igObjectPropertyForShader_registerNow();
void igObjectPropertyForShader_register();
void *igObjectPropertyForShader_getMetaCall();
}
struct UnknownGenRoot8013C060 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C060(){igObject_construct(this);}
};
struct UnknownGenObject8013C060_0 : UnknownGenRoot8013C060 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C060_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C060_1 : UnknownGenObject8013C060_0 {
 inline ~UnknownGenObject8013C060_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013C060 : UnknownGenObject8013C060_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C060(){unknown00=igObjectPropertyForShader_vtable;}
};
extern "C" {
void *igObjectPropertyForShader_getMeta(){
 if(!igObjectPropertyForShader_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForShader_meta)[0x24/4]&4)) igObjectPropertyForShader_registerNow();
 return igObjectPropertyForShader_meta;
}
void *igObjectPropertyForShader_vtableRead(){
 UnknownGenObject8013C060 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForShader_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForShader_registerNow(){
 meta_registerNow((int)igObjectPropertyForShader_register);
}
void igObjectPropertyForShader_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForShader_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForShader_getMetaCall,(int)igObjectPropertyForShader_className,44,(int)igObjectPropertyForShader_vtableRead,(int)fn_8013C1E8,0,(int)lbl_8055F810);
}
void *igObjectPropertyForShader_getMetaCall(){return igObjectPropertyForShader_getMeta();}
}
#pragma pop
