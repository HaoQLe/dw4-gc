#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F5C0();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForLightSet_className[];
extern char igObjectPropertyForLightSet_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForLightSet_dependencies[8];
extern void *igObjectPropertyForLightSet_meta;
void *igObjectPropertyForLightSet_getMeta();
void *igObjectPropertyForLightSet_vtableRead();
void igObjectPropertyForLightSet_arkRegister();
void igObjectPropertyForLightSet_register();
void *igObjectPropertyForLightSet_getMetaCall();
}
struct UnknownGenRoot8013F438 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F438(){igObject_construct(this);}
};
struct UnknownGenObject8013F438_0 : UnknownGenRoot8013F438 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F438_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F438_1 : UnknownGenObject8013F438_0 {
 inline ~UnknownGenObject8013F438_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013F438 : UnknownGenObject8013F438_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F438(){unknown00=igObjectPropertyForLightSet_vtable;}
};
extern "C" {
void *igObjectPropertyForLightSet_getMeta(){
 if(!igObjectPropertyForLightSet_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForLightSet_meta)[0x24/4]&4)) igObjectPropertyForLightSet_arkRegister();
 return igObjectPropertyForLightSet_meta;
}
void *igObjectPropertyForLightSet_vtableRead(){
 UnknownGenObject8013F438 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForLightSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForLightSet_arkRegister(){
 meta_registerNow((int)igObjectPropertyForLightSet_register);
}
void igObjectPropertyForLightSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForLightSet_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForLightSet_getMetaCall,(int)igObjectPropertyForLightSet_className,44,(int)igObjectPropertyForLightSet_vtableRead,(int)fn_8013F5C0,0,(int)igObjectPropertyForLightSet_dependencies);
}
void *igObjectPropertyForLightSet_getMetaCall(){return igObjectPropertyForLightSet_getMeta();}
}
#pragma pop
