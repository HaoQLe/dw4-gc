#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F348();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForLightStateSet_className[];
extern char igObjectPropertyForLightStateSet_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForLightStateSet_dependencies[8];
extern void *igObjectPropertyForLightStateSet_meta;
void *igObjectPropertyForLightStateSet_getMeta();
void *igObjectPropertyForLightStateSet_vtableRead();
void igObjectPropertyForLightStateSet_arkRegister();
void igObjectPropertyForLightStateSet_register();
void *igObjectPropertyForLightStateSet_getMetaCall();
}
struct UnknownGenRoot8013F1C0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F1C0(){igObject_construct(this);}
};
struct UnknownGenObject8013F1C0_0 : UnknownGenRoot8013F1C0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F1C0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F1C0_1 : UnknownGenObject8013F1C0_0 {
 inline ~UnknownGenObject8013F1C0_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013F1C0 : UnknownGenObject8013F1C0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F1C0(){unknown00=igObjectPropertyForLightStateSet_vtable;}
};
extern "C" {
void *igObjectPropertyForLightStateSet_getMeta(){
 if(!igObjectPropertyForLightStateSet_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForLightStateSet_meta)[0x24/4]&4)) igObjectPropertyForLightStateSet_arkRegister();
 return igObjectPropertyForLightStateSet_meta;
}
void *igObjectPropertyForLightStateSet_vtableRead(){
 UnknownGenObject8013F1C0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForLightStateSet_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForLightStateSet_arkRegister(){
 meta_registerNow((int)igObjectPropertyForLightStateSet_register);
}
void igObjectPropertyForLightStateSet_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForLightStateSet_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForLightStateSet_getMetaCall,(int)igObjectPropertyForLightStateSet_className,44,(int)igObjectPropertyForLightStateSet_vtableRead,(int)fn_8013F348,0,(int)igObjectPropertyForLightStateSet_dependencies);
}
void *igObjectPropertyForLightStateSet_getMetaCall(){return igObjectPropertyForLightStateSet_getMeta();}
}
#pragma pop
