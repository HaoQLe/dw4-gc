#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void igObject_construct(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013EBE0();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForUserInfo_className[];
extern char igObjectPropertyForUserInfo_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char igObjectPropertyForUserInfo_dependencies[8];
extern void *igObjectPropertyForUserInfo_meta;
void *igObjectPropertyForUserInfo_getMeta();
void *igObjectPropertyForUserInfo_vtableRead();
void igObjectPropertyForUserInfo_arkRegister();
void igObjectPropertyForUserInfo_register();
void *igObjectPropertyForUserInfo_getMetaCall();
}
struct UnknownGenRoot8013EA58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013EA58(){igObject_construct(this);}
};
struct UnknownGenObject8013EA58_0 : UnknownGenRoot8013EA58 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013EA58_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013EA58_1 : UnknownGenObject8013EA58_0 {
 inline ~UnknownGenObject8013EA58_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013EA58 : UnknownGenObject8013EA58_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013EA58(){unknown00=igObjectPropertyForUserInfo_vtable;}
};
extern "C" {
void *igObjectPropertyForUserInfo_getMeta(){
 if(!igObjectPropertyForUserInfo_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForUserInfo_meta)[0x24/4]&4)) igObjectPropertyForUserInfo_arkRegister();
 return igObjectPropertyForUserInfo_meta;
}
void *igObjectPropertyForUserInfo_vtableRead(){
 UnknownGenObject8013EA58 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForUserInfo_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForUserInfo_arkRegister(){
 meta_registerNow((int)igObjectPropertyForUserInfo_register);
}
void igObjectPropertyForUserInfo_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForUserInfo_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForUserInfo_getMetaCall,(int)igObjectPropertyForUserInfo_className,44,(int)igObjectPropertyForUserInfo_vtableRead,(int)fn_8013EBE0,0,(int)igObjectPropertyForUserInfo_dependencies);
}
void *igObjectPropertyForUserInfo_getMetaCall(){return igObjectPropertyForUserInfo_getMeta();}
}
#pragma pop
