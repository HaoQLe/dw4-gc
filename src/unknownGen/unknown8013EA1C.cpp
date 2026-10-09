#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013EBE0();
void igObjectPropertyForNode_register();
extern char lbl_8049DD78[];
extern char lbl_804A558C[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F898[8];
extern void *lbl_80563F7C;
void *igObjectPropertyForUserInfo_getMeta();
void *igObjectPropertyForUserInfo_vtableRead();
void fn_8013EB24();
void igObjectPropertyForUserInfo_register();
void *igObjectPropertyForUserInfo_getMetaCall();
}
struct UnknownGenRoot8013EA58 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013EA58(){fn_8006665C(this);}
};
struct UnknownGenObject8013EA58_0 : UnknownGenRoot8013EA58 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013EA58_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013EA58_1 : UnknownGenObject8013EA58_0 {
 inline ~UnknownGenObject8013EA58_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013EA58 : UnknownGenObject8013EA58_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013EA58(){unknown00=lbl_804A558C;}
};
extern "C" {
void *igObjectPropertyForUserInfo_getMeta(){
 if(!lbl_80563F7C || !(reinterpret_cast<unsigned int *>(lbl_80563F7C)[0x24/4]&4)) fn_8013EB24();
 return lbl_80563F7C;
}
void *igObjectPropertyForUserInfo_vtableRead(){
 UnknownGenObject8013EA58 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A558C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013EB24(){
 fn_80066188((int)igObjectPropertyForUserInfo_register);
}
void igObjectPropertyForUserInfo_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F7C,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForUserInfo_getMetaCall,(int)lbl_8049DD78,44,(int)igObjectPropertyForUserInfo_vtableRead,(int)fn_8013EBE0,0,(int)lbl_8055F898);
}
void *igObjectPropertyForUserInfo_getMetaCall(){return igObjectPropertyForUserInfo_getMeta();}
}
#pragma pop
