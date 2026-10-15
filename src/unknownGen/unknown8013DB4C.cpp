#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DD10();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForActor_className[];
extern char igObjectPropertyForActor_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForActor_dependencies[8];
extern void *igObjectPropertyForActor_meta;
void *igObjectPropertyForActor_getMeta();
void *igObjectPropertyForActor_vtableRead();
void igObjectPropertyForActor_arkRegister();
void igObjectPropertyForActor_register();
void *igObjectPropertyForActor_getMetaCall();
}
struct UnknownGenRoot8013DB88 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013DB88(){igObject_construct(this);}
};
struct UnknownGenObject8013DB88_0 : UnknownGenRoot8013DB88 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013DB88_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013DB88_1 : UnknownGenObject8013DB88_0 {
 inline ~UnknownGenObject8013DB88_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013DB88 : UnknownGenObject8013DB88_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013DB88(){unknown00=igObjectPropertyForActor_vtable;}
};
extern "C" {
void *igObjectPropertyForActor_getMeta(){
 if(!igObjectPropertyForActor_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForActor_meta)[0x24/4]&4)) igObjectPropertyForActor_arkRegister();
 return igObjectPropertyForActor_meta;
}
void *igObjectPropertyForActor_vtableRead(){
 UnknownGenObject8013DB88 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForActor_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForActor_arkRegister(){
 meta_registerNow((int)igObjectPropertyForActor_register);
}
void igObjectPropertyForActor_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForActor_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForActor_getMetaCall,(int)igObjectPropertyForActor_className,44,(int)igObjectPropertyForActor_vtableRead,(int)fn_8013DD10,0,(int)igObjectPropertyForActor_dependencies);
}
void *igObjectPropertyForActor_getMetaCall(){return igObjectPropertyForActor_getMeta();}
}
#pragma pop
