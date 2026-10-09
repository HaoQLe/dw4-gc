#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D5A8();
void igObjectPropertyForNode_register();
extern char lbl_8049DC40[];
extern char lbl_804A50EC[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F850[8];
extern void *lbl_80563F34;
void *igObjectPropertyForEnvironmentMapShader_getMeta();
void *igObjectPropertyForEnvironmentMapShader_vtableRead();
void fn_8013D4EC();
void igObjectPropertyForEnvironmentMapShader_register();
void *igObjectPropertyForEnvironmentMapShader_getMetaCall();
}
struct UnknownGenRoot8013D420 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D420(){fn_8006665C(this);}
};
struct UnknownGenObject8013D420_0 : UnknownGenRoot8013D420 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D420_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D420_1 : UnknownGenObject8013D420_0 {
 inline ~UnknownGenObject8013D420_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013D420 : UnknownGenObject8013D420_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D420(){unknown00=lbl_804A50EC;}
};
extern "C" {
void *igObjectPropertyForEnvironmentMapShader_getMeta(){
 if(!lbl_80563F34 || !(reinterpret_cast<unsigned int *>(lbl_80563F34)[0x24/4]&4)) fn_8013D4EC();
 return lbl_80563F34;
}
void *igObjectPropertyForEnvironmentMapShader_vtableRead(){
 UnknownGenObject8013D420 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A50EC;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013D4EC(){
 fn_80066188((int)igObjectPropertyForEnvironmentMapShader_register);
}
void igObjectPropertyForEnvironmentMapShader_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F34,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForEnvironmentMapShader_getMetaCall,(int)lbl_8049DC40,44,(int)igObjectPropertyForEnvironmentMapShader_vtableRead,(int)fn_8013D5A8,0,(int)lbl_8055F850);
}
void *igObjectPropertyForEnvironmentMapShader_getMetaCall(){return igObjectPropertyForEnvironmentMapShader_getMeta();}
}
#pragma pop
