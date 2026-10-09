#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013C6D8();
void igObjectPropertyForNode_register();
extern char lbl_8049DB5C[];
extern char lbl_804A4D74[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F820[8];
extern void *lbl_80563F04;
void *igObjectPropertyForBlendMatrixSelect_getMeta();
void *igObjectPropertyForBlendMatrixSelect_vtableRead();
void fn_8013C61C();
void igObjectPropertyForBlendMatrixSelect_register();
void *igObjectPropertyForBlendMatrixSelect_getMetaCall();
}
struct UnknownGenRoot8013C550 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013C550(){fn_8006665C(this);}
};
struct UnknownGenObject8013C550_0 : UnknownGenRoot8013C550 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013C550_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013C550_1 : UnknownGenObject8013C550_0 {
 inline ~UnknownGenObject8013C550_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013C550 : UnknownGenObject8013C550_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013C550(){unknown00=lbl_804A4D74;}
};
extern "C" {
void *igObjectPropertyForBlendMatrixSelect_getMeta(){
 if(!lbl_80563F04 || !(reinterpret_cast<unsigned int *>(lbl_80563F04)[0x24/4]&4)) fn_8013C61C();
 return lbl_80563F04;
}
void *igObjectPropertyForBlendMatrixSelect_vtableRead(){
 UnknownGenObject8013C550 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4D74;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013C61C(){
 fn_80066188((int)igObjectPropertyForBlendMatrixSelect_register);
}
void igObjectPropertyForBlendMatrixSelect_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F04,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForBlendMatrixSelect_getMetaCall,(int)lbl_8049DB5C,44,(int)igObjectPropertyForBlendMatrixSelect_vtableRead,(int)fn_8013C6D8,0,(int)lbl_8055F820);
}
void *igObjectPropertyForBlendMatrixSelect_getMetaCall(){return igObjectPropertyForBlendMatrixSelect_getMeta();}
}
#pragma pop
