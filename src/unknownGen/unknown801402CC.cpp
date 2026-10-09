#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_80140490();
void igObjectPropertyForNode_register();
extern char lbl_8049DEA4[];
extern char lbl_804A5AC0[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8E8[8];
extern void *lbl_80563FCC;
void *igObjectPropertyForTransform_getMeta();
void *igObjectPropertyForTransform_vtableRead();
void fn_801403D4();
void igObjectPropertyForTransform_register();
void *igObjectPropertyForTransform_getMetaCall();
}
struct UnknownGenRoot80140308 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140308(){fn_8006665C(this);}
};
struct UnknownGenObject80140308_0 : UnknownGenRoot80140308 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140308_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140308_1 : UnknownGenObject80140308_0 {
 inline ~UnknownGenObject80140308_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject80140308 : UnknownGenObject80140308_1 {
 char unknown24[12];
 inline ~UnknownGenObject80140308(){unknown00=lbl_804A5AC0;}
};
extern "C" {
void *igObjectPropertyForTransform_getMeta(){
 if(!lbl_80563FCC || !(reinterpret_cast<unsigned int *>(lbl_80563FCC)[0x24/4]&4)) fn_801403D4();
 return lbl_80563FCC;
}
void *igObjectPropertyForTransform_vtableRead(){
 UnknownGenObject80140308 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5AC0;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_801403D4(){
 fn_80066188((int)igObjectPropertyForTransform_register);
}
void igObjectPropertyForTransform_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FCC,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForTransform_getMetaCall,(int)lbl_8049DEA4,44,(int)igObjectPropertyForTransform_vtableRead,(int)fn_80140490,0,(int)lbl_8055F8E8);
}
void *igObjectPropertyForTransform_getMetaCall(){return igObjectPropertyForTransform_getMeta();}
}
#pragma pop
