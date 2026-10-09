#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void igObjectPropertyForNode_fieldInit();
void igObjectProperty_register();
extern char lbl_8049DEC4[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8F0[8];
extern void *lbl_80563FD4;
extern void *lbl_80563FF8;
void *igObjectPropertyForNode_getMeta();
void *igObjectPropertyForNode_vtableRead();
void fn_8014063C();
void igObjectPropertyForNode_register();
void *igObjectPropertyForNode_getMetaCall();
void *igObjectPropertyForNode_parentMeta();
}
struct UnknownGenRoot80140580 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot80140580(){fn_8006665C(this);}
};
struct UnknownGenObject80140580_0 : UnknownGenRoot80140580 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject80140580_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject80140580 : UnknownGenObject80140580_0 {
 char unknown24[12];
 inline ~UnknownGenObject80140580(){unknown00=lbl_804A5BE8;}
};
extern "C" {
void *igObjectPropertyForNode_getMeta(){
 if(!lbl_80563FD4 || !(reinterpret_cast<unsigned int *>(lbl_80563FD4)[0x24/4]&4)) fn_8014063C();
 return lbl_80563FD4;
}
void *igObjectPropertyForNode_vtableRead(){
 UnknownGenObject80140580 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014063C(){
 fn_80066188((int)igObjectPropertyForNode_register);
}
void igObjectPropertyForNode_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FD4,(int)igObjectProperty_register,(int)igObjectPropertyForNode_parentMeta,(int)igObjectPropertyForNode_getMetaCall,(int)lbl_8049DEC4,44,(int)igObjectPropertyForNode_vtableRead,(int)igObjectPropertyForNode_fieldInit,0,(int)lbl_8055F8F0);
}
void *igObjectPropertyForNode_getMetaCall(){return igObjectPropertyForNode_getMeta();}
void *igObjectPropertyForNode_parentMeta(){return lbl_80563FF8;}
}
#pragma pop
