#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void meta_registerNow(int);
void meta_registerClass(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_80140218();
void igObjectPropertyForNode_register();
extern char igObjectPropertyForGroup_className[];
extern char igObjectPropertyForGroup_vtable[];
extern char igObjectPropertyForNode_vtable[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8E0[8];
extern void *igObjectPropertyForGroup_meta;
void *igObjectPropertyForGroup_getMeta();
void *igObjectPropertyForGroup_vtableRead();
void igObjectPropertyForGroup_registerNow();
void igObjectPropertyForGroup_register();
void *igObjectPropertyForGroup_getMetaCall();
}
struct UnknownGenRoot80140090 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140090(){fn_8006665C(this);}
};
struct UnknownGenObject80140090_0 : UnknownGenRoot80140090 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140090_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140090_1 : UnknownGenObject80140090_0 {
 inline ~UnknownGenObject80140090_1(){unknown00=igObjectPropertyForNode_vtable;}
};
struct UnknownGenObject80140090 : UnknownGenObject80140090_1 {
 char unknown24[12];
 inline ~UnknownGenObject80140090(){unknown00=igObjectPropertyForGroup_vtable;}
};
extern "C" {
void *igObjectPropertyForGroup_getMeta(){
 if(!igObjectPropertyForGroup_meta || !(reinterpret_cast<unsigned int *>(igObjectPropertyForGroup_meta)[0x24/4]&4)) igObjectPropertyForGroup_registerNow();
 return igObjectPropertyForGroup_meta;
}
void *igObjectPropertyForGroup_vtableRead(){
 UnknownGenObject80140090 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=igObjectPropertyForNode_vtable;
 object.unknown00=igObjectPropertyForGroup_vtable;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void igObjectPropertyForGroup_registerNow(){
 meta_registerNow((int)igObjectPropertyForGroup_register);
}
void igObjectPropertyForGroup_register(){
 fn_8012FC48();
 meta_registerClass(0,(int)&igObjectPropertyForGroup_meta,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForGroup_getMetaCall,(int)igObjectPropertyForGroup_className,44,(int)igObjectPropertyForGroup_vtableRead,(int)fn_80140218,0,(int)lbl_8055F8E0);
}
void *igObjectPropertyForGroup_getMetaCall(){return igObjectPropertyForGroup_getMeta();}
}
#pragma pop
