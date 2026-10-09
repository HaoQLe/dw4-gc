#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void fn_8013BF70();
void igObjectPropertyForNode_register();
extern char lbl_8049DAFC[];
extern char lbl_804A4BB8[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F808[8];
extern void *lbl_80563EEC;
extern void *lbl_80563FD4;
void *igObjectPropertyForCamera_getMeta();
void *igObjectPropertyForCamera_vtableRead();
void fn_8013BEAC();
void igObjectPropertyForCamera_register();
void *igObjectPropertyForCamera_getMetaCall();
void *fn_8013BF68();
}
struct UnknownGenRoot8013BDE0 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013BDE0(){fn_8006665C(this);}
};
struct UnknownGenObject8013BDE0_0 : UnknownGenRoot8013BDE0 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013BDE0_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013BDE0_1 : UnknownGenObject8013BDE0_0 {
 inline ~UnknownGenObject8013BDE0_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013BDE0 : UnknownGenObject8013BDE0_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013BDE0(){unknown00=lbl_804A4BB8;}
};
extern "C" {
void *igObjectPropertyForCamera_getMeta(){
 if(!lbl_80563EEC || !(reinterpret_cast<unsigned int *>(lbl_80563EEC)[0x24/4]&4)) fn_8013BEAC();
 return lbl_80563EEC;
}
void *igObjectPropertyForCamera_vtableRead(){
 UnknownGenObject8013BDE0 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4BB8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013BEAC(){
 fn_80066188((int)igObjectPropertyForCamera_register);
}
void igObjectPropertyForCamera_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563EEC,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForCamera_getMetaCall,(int)lbl_8049DAFC,44,(int)igObjectPropertyForCamera_vtableRead,(int)fn_8013BF70,0,(int)lbl_8055F808);
}
void *igObjectPropertyForCamera_getMetaCall(){return igObjectPropertyForCamera_getMeta();}
void *fn_8013BF68(){return lbl_80563FD4;}
}
#pragma pop
