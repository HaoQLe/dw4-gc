#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_80140490();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForTransform_className[];
extern char igObjectPropertyForTransform_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8E8[8];
extern void *igObjectPropertyForTransform_meta;
void *igObjectPropertyForTransform_getMeta();
void *igObjectPropertyForTransform_vtableRead();
void igObjectPropertyForTransform_registerNow();
void igObjectPropertyForTransform_register();
void *igObjectPropertyForTransform_getMetaCall();
}
struct UnknownGenRoot80140308 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140308(){fn_8006665C(this);}
};
struct UnknownGenObject80140308_0 : UnknownGenRoot80140308 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140308_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140308_1 : UnknownGenObject80140308_0 {
 inline ~UnknownGenObject80140308_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject80140308 : UnknownGenObject80140308_1 {
 char unknown24[12];
 inline ~UnknownGenObject80140308(){unknown00=igObjectPropertyForTransform_vtable;}
};
extern "C" {
void *igObjectPropertyForTransform_getMeta(){
 if(!igObjectPropertyForTransform_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForTransform_meta)[0x24/4]&4)) igObjectPropertyForTransform_registerNow();
 return igObjectPropertyForTransform_meta;
}
void *igObjectPropertyForTransform_vtableRead(){
 UnknownGenObject80140308 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForTransform_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForTransform_registerNow(){
 meta_registerNow((int)igObjectPropertyForTransform_register);
}
void igObjectPropertyForTransform_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForTransform_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForTransform_getMetaCall,(int)igObjectPropertyForTransform_className,44,(int)igObjectPropertyForTransform_vtableRead,(int)fn_80140490,0,(int)lbl_8055F8E8);
}
void *igObjectPropertyForTransform_getMetaCall(){return igObjectPropertyForTransform_getMeta();}
}
#pragma pop
