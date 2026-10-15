#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FD28();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForLod_className[];
extern char igObjectPropertyForLod_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForLod_dependencies[8];
extern void *igObjectPropertyForLod_meta;
void *igObjectPropertyForLod_getMeta();
void *igObjectPropertyForLod_vtableRead();
void igObjectPropertyForLod_arkRegister();
void igObjectPropertyForLod_register();
void *igObjectPropertyForLod_getMetaCall();
}
struct UnknownGenRoot8013FBA0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013FBA0(){igObject_construct(this);}
};
struct UnknownGenObject8013FBA0_0 : UnknownGenRoot8013FBA0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013FBA0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013FBA0_1 : UnknownGenObject8013FBA0_0 {
 inline ~UnknownGenObject8013FBA0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013FBA0 : UnknownGenObject8013FBA0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013FBA0(){unknown00=igObjectPropertyForLod_vtable;}
};
extern "C" {
void *igObjectPropertyForLod_getMeta(){
 if(!igObjectPropertyForLod_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForLod_meta)[0x24/4]&4)) igObjectPropertyForLod_arkRegister();
 return igObjectPropertyForLod_meta;
}
void *igObjectPropertyForLod_vtableRead(){
 UnknownGenObject8013FBA0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForLod_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForLod_arkRegister(){
 meta_registerNow((int)igObjectPropertyForLod_register);
}
void igObjectPropertyForLod_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForLod_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForLod_getMetaCall,(int)igObjectPropertyForLod_className,44,(int)igObjectPropertyForLod_vtableRead,(int)fn_8013FD28,0,(int)igObjectPropertyForLod_dependencies);
}
void *igObjectPropertyForLod_getMetaCall(){return igObjectPropertyForLod_getMeta();}
}
#pragma pop
