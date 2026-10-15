#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C6D8();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForBlendMatrixSelect_className[];
extern char igObjectPropertyForBlendMatrixSelect_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForBlendMatrixSelect_dependencies[8];
extern void *igObjectPropertyForBlendMatrixSelect_meta;
void *igObjectPropertyForBlendMatrixSelect_getMeta();
void *igObjectPropertyForBlendMatrixSelect_vtableRead();
void igObjectPropertyForBlendMatrixSelect_arkRegister();
void igObjectPropertyForBlendMatrixSelect_register();
void *igObjectPropertyForBlendMatrixSelect_getMetaCall();
}
struct UnknownGenRoot8013C550 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C550(){igObject_construct(this);}
};
struct UnknownGenObject8013C550_0 : UnknownGenRoot8013C550 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C550_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C550_1 : UnknownGenObject8013C550_0 {
 inline ~UnknownGenObject8013C550_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013C550 : UnknownGenObject8013C550_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C550(){unknown00=igObjectPropertyForBlendMatrixSelect_vtable;}
};
extern "C" {
void *igObjectPropertyForBlendMatrixSelect_getMeta(){
 if(!igObjectPropertyForBlendMatrixSelect_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForBlendMatrixSelect_meta)[0x24/4]&4)) igObjectPropertyForBlendMatrixSelect_arkRegister();
 return igObjectPropertyForBlendMatrixSelect_meta;
}
void *igObjectPropertyForBlendMatrixSelect_vtableRead(){
 UnknownGenObject8013C550 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForBlendMatrixSelect_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForBlendMatrixSelect_arkRegister(){
 meta_registerNow((int)igObjectPropertyForBlendMatrixSelect_register);
}
void igObjectPropertyForBlendMatrixSelect_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForBlendMatrixSelect_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForBlendMatrixSelect_getMetaCall,(int)igObjectPropertyForBlendMatrixSelect_className,44,(int)igObjectPropertyForBlendMatrixSelect_vtableRead,(int)fn_8013C6D8,0,(int)igObjectPropertyForBlendMatrixSelect_dependencies);
}
void *igObjectPropertyForBlendMatrixSelect_getMetaCall(){return igObjectPropertyForBlendMatrixSelect_getMeta();}
}
#pragma pop
