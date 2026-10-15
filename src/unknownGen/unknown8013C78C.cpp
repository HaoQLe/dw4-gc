#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C950();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForOverrideAttrSet_className[];
extern char igObjectPropertyForOverrideAttrSet_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForOverrideAttrSet_dependencies[8];
extern void *igObjectPropertyForOverrideAttrSet_meta;
void *igObjectPropertyForOverrideAttrSet_getMeta();
void *igObjectPropertyForOverrideAttrSet_vtableRead();
void igObjectPropertyForOverrideAttrSet_arkRegister();
void igObjectPropertyForOverrideAttrSet_register();
void *igObjectPropertyForOverrideAttrSet_getMetaCall();
}
struct UnknownGenRoot8013C7C8 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C7C8(){igObject_construct(this);}
};
struct UnknownGenObject8013C7C8_0 : UnknownGenRoot8013C7C8 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C7C8_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C7C8_1 : UnknownGenObject8013C7C8_0 {
 inline ~UnknownGenObject8013C7C8_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013C7C8 : UnknownGenObject8013C7C8_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C7C8(){unknown00=igObjectPropertyForOverrideAttrSet_vtable;}
};
extern "C" {
void *igObjectPropertyForOverrideAttrSet_getMeta(){
 if(!igObjectPropertyForOverrideAttrSet_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForOverrideAttrSet_meta)[0x24/4]&4)) igObjectPropertyForOverrideAttrSet_arkRegister();
 return igObjectPropertyForOverrideAttrSet_meta;
}
void *igObjectPropertyForOverrideAttrSet_vtableRead(){
 UnknownGenObject8013C7C8 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForOverrideAttrSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForOverrideAttrSet_arkRegister(){
 meta_registerNow((int)igObjectPropertyForOverrideAttrSet_register);
}
void igObjectPropertyForOverrideAttrSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForOverrideAttrSet_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForOverrideAttrSet_getMetaCall,(int)igObjectPropertyForOverrideAttrSet_className,44,(int)igObjectPropertyForOverrideAttrSet_vtableRead,(int)fn_8013C950,0,(int)igObjectPropertyForOverrideAttrSet_dependencies);
}
void *igObjectPropertyForOverrideAttrSet_getMetaCall(){return igObjectPropertyForOverrideAttrSet_getMeta();}
}
#pragma pop
