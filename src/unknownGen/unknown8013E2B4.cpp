#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013E478();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForTransformRecorder_className[];
extern char igObjectPropertyForTransformRecorder_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForTransformRecorder_dependencies[8];
extern void *igObjectPropertyForTransformRecorder_meta;
void *igObjectPropertyForTransformRecorder_getMeta();
void *igObjectPropertyForTransformRecorder_vtableRead();
void igObjectPropertyForTransformRecorder_arkRegister();
void igObjectPropertyForTransformRecorder_register();
void *igObjectPropertyForTransformRecorder_getMetaCall();
}
struct UnknownGenRoot8013E2F0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013E2F0(){igObject_construct(this);}
};
struct UnknownGenObject8013E2F0_0 : UnknownGenRoot8013E2F0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013E2F0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013E2F0_1 : UnknownGenObject8013E2F0_0 {
 inline ~UnknownGenObject8013E2F0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013E2F0 : UnknownGenObject8013E2F0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013E2F0(){unknown00=igObjectPropertyForTransformRecorder_vtable;}
};
extern "C" {
void *igObjectPropertyForTransformRecorder_getMeta(){
 if(!igObjectPropertyForTransformRecorder_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForTransformRecorder_meta)[0x24/4]&4)) igObjectPropertyForTransformRecorder_arkRegister();
 return igObjectPropertyForTransformRecorder_meta;
}
void *igObjectPropertyForTransformRecorder_vtableRead(){
 UnknownGenObject8013E2F0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForTransformRecorder_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForTransformRecorder_arkRegister(){
 meta_registerNow((int)igObjectPropertyForTransformRecorder_register);
}
void igObjectPropertyForTransformRecorder_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForTransformRecorder_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForTransformRecorder_getMetaCall,(int)igObjectPropertyForTransformRecorder_className,44,(int)igObjectPropertyForTransformRecorder_vtableRead,(int)fn_8013E478,0,(int)igObjectPropertyForTransformRecorder_dependencies);
}
void *igObjectPropertyForTransformRecorder_getMetaCall(){return igObjectPropertyForTransformRecorder_getMeta();}
}
#pragma pop
