#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F838();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForJoint_className[];
extern char igObjectPropertyForJoint_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForJoint_dependencies[8];
extern void *igObjectPropertyForJoint_meta;
void *igObjectPropertyForJoint_getMeta();
void *igObjectPropertyForJoint_vtableRead();
void igObjectPropertyForJoint_arkRegister();
void igObjectPropertyForJoint_register();
void *igObjectPropertyForJoint_getMetaCall();
}
struct UnknownGenRoot8013F6B0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F6B0(){igObject_construct(this);}
};
struct UnknownGenObject8013F6B0_0 : UnknownGenRoot8013F6B0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F6B0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F6B0_1 : UnknownGenObject8013F6B0_0 {
 inline ~UnknownGenObject8013F6B0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013F6B0 : UnknownGenObject8013F6B0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F6B0(){unknown00=igObjectPropertyForJoint_vtable;}
};
extern "C" {
void *igObjectPropertyForJoint_getMeta(){
 if(!igObjectPropertyForJoint_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForJoint_meta)[0x24/4]&4)) igObjectPropertyForJoint_arkRegister();
 return igObjectPropertyForJoint_meta;
}
void *igObjectPropertyForJoint_vtableRead(){
 UnknownGenObject8013F6B0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForJoint_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForJoint_arkRegister(){
 meta_registerNow((int)igObjectPropertyForJoint_register);
}
void igObjectPropertyForJoint_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForJoint_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForJoint_getMetaCall,(int)igObjectPropertyForJoint_className,44,(int)igObjectPropertyForJoint_vtableRead,(int)fn_8013F838,0,(int)igObjectPropertyForJoint_dependencies);
}
void *igObjectPropertyForJoint_getMetaCall(){return igObjectPropertyForJoint_getMeta();}
}
#pragma pop
