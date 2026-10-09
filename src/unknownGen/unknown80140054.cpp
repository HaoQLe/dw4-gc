#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_80140218();
void igObjectPropertyForNode_register();
extern char lbl_8049DE88[];
extern char lbl_804A5B54[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F8E0[8];
extern void *lbl_80563FC4;
void *igObjectPropertyForGroup_getMeta();
void *igObjectPropertyForGroup_vtableRead();
void fn_8014015C();
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
 inline ~UnknownGenObject80140090_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject80140090 : UnknownGenObject80140090_1 {
 char unknown24[12];
 inline ~UnknownGenObject80140090(){unknown00=lbl_804A5B54;}
};
extern "C" {
void *igObjectPropertyForGroup_getMeta(){
 if(!lbl_80563FC4 || !(reinterpret_cast<unsigned int *>(lbl_80563FC4)[0x24/4]&4)) fn_8014015C();
 return lbl_80563FC4;
}
void *igObjectPropertyForGroup_vtableRead(){
 UnknownGenObject80140090 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5B54;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8014015C(){
 fn_80066188((int)igObjectPropertyForGroup_register);
}
void igObjectPropertyForGroup_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563FC4,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForGroup_getMetaCall,(int)lbl_8049DE88,44,(int)igObjectPropertyForGroup_vtableRead,(int)fn_80140218,0,(int)lbl_8055F8E0);
}
void *igObjectPropertyForGroup_getMetaCall(){return igObjectPropertyForGroup_getMeta();}
}
#pragma pop
