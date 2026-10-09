#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D820();
void igObjectPropertyForNode_register();
extern char lbl_8049DC68[];
extern char lbl_804A5180[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F858[8];
extern void *lbl_80563F3C;
void *igObjectPropertyForBumpMapShader_getMeta();
void *igObjectPropertyForBumpMapShader_vtableRead();
void fn_8013D764();
void igObjectPropertyForBumpMapShader_register();
void *igObjectPropertyForBumpMapShader_getMetaCall();
}
struct UnknownGenRoot8013D698 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013D698(){fn_8006665C(this);}
};
struct UnknownGenObject8013D698_0 : UnknownGenRoot8013D698 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013D698_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013D698_1 : UnknownGenObject8013D698_0 {
 inline ~UnknownGenObject8013D698_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013D698 : UnknownGenObject8013D698_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013D698(){unknown00=lbl_804A5180;}
};
extern "C" {
void *igObjectPropertyForBumpMapShader_getMeta(){
 if(!lbl_80563F3C || !(reinterpret_cast<unsigned int *>(lbl_80563F3C)[0x24/4]&4)) fn_8013D764();
 return lbl_80563F3C;
}
void *igObjectPropertyForBumpMapShader_vtableRead(){
 UnknownGenObject8013D698 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A5180;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013D764(){
 fn_80066188((int)igObjectPropertyForBumpMapShader_register);
}
void igObjectPropertyForBumpMapShader_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F3C,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForBumpMapShader_getMetaCall,(int)lbl_8049DC68,44,(int)igObjectPropertyForBumpMapShader_vtableRead,(int)fn_8013D820,0,(int)lbl_8055F858);
}
void *igObjectPropertyForBumpMapShader_getMetaCall(){return igObjectPropertyForBumpMapShader_getMeta();}
}
#pragma pop
