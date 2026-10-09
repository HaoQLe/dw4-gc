#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013F5C0();
void igObjectPropertyForNode_register();
extern char lbl_8049DE00[];
extern char lbl_804A57DC[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8B8[8];
extern void *lbl_80563F9C;
void *igObjectPropertyForLightSet_getMeta();
void *igObjectPropertyForLightSet_vtableRead();
void fn_8013F504();
void igObjectPropertyForLightSet_register();
void *igObjectPropertyForLightSet_getMetaCall();
}
struct UnknownGenRoot8013F438 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013F438(){fn_8006665C(this);}
};
struct UnknownGenObject8013F438_0 : UnknownGenRoot8013F438 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013F438_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013F438_1 : UnknownGenObject8013F438_0 {
 inline ~UnknownGenObject8013F438_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013F438 : UnknownGenObject8013F438_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013F438(){unknown00=lbl_804A57DC;}
};
extern "C" {
void *igObjectPropertyForLightSet_getMeta(){
 if(!lbl_80563F9C || !(reinterpret_cast<unsigned int *>(lbl_80563F9C)[0x24/4]&4)) fn_8013F504();
 return lbl_80563F9C;
}
void *igObjectPropertyForLightSet_vtableRead(){
 UnknownGenObject8013F438 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A57DC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013F504(){
 fn_80066188((int)igObjectPropertyForLightSet_register);
}
void igObjectPropertyForLightSet_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F9C,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForLightSet_getMetaCall,(int)lbl_8049DE00,44,(int)igObjectPropertyForLightSet_vtableRead,(int)fn_8013F5C0,0,(int)lbl_8055F8B8);
}
void *igObjectPropertyForLightSet_getMetaCall(){return igObjectPropertyForLightSet_getMeta();}
}
#pragma pop
