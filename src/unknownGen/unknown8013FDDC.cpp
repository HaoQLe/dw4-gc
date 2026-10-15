#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013FFA0();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForSwitch_className[];
extern char igObjectPropertyForSwitch_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8D8[8];
extern void *igObjectPropertyForSwitch_meta;
void *igObjectPropertyForSwitch_getMeta();
void *igObjectPropertyForSwitch_vtableRead();
void igObjectPropertyForSwitch_registerNow();
void igObjectPropertyForSwitch_register();
void *igObjectPropertyForSwitch_getMetaCall();
}
struct UnknownGenRoot8013FE18 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013FE18(){fn_8006665C(this);}
};
struct UnknownGenObject8013FE18_0 : UnknownGenRoot8013FE18 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013FE18_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013FE18_1 : UnknownGenObject8013FE18_0 {
 inline ~UnknownGenObject8013FE18_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject8013FE18 : UnknownGenObject8013FE18_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013FE18(){unknown00=igObjectPropertyForSwitch_vtable;}
};
extern "C" {
void *igObjectPropertyForSwitch_getMeta(){
 if(!igObjectPropertyForSwitch_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForSwitch_meta)[0x24/4]&4)) igObjectPropertyForSwitch_registerNow();
 return igObjectPropertyForSwitch_meta;
}
void *igObjectPropertyForSwitch_vtableRead(){
 UnknownGenObject8013FE18 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForSwitch_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForSwitch_registerNow(){
 meta_registerNow((int)igObjectPropertyForSwitch_register);
}
void igObjectPropertyForSwitch_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForSwitch_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForSwitch_getMetaCall,(int)igObjectPropertyForSwitch_className,44,(int)igObjectPropertyForSwitch_vtableRead,(int)fn_8013FFA0,0,(int)lbl_8055F8D8);
}
void *igObjectPropertyForSwitch_getMetaCall(){return igObjectPropertyForSwitch_getMeta();}
}
#pragma pop
