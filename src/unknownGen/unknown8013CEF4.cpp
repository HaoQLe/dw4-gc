#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013D0B8();
void igObjectPropertyForNode_register();
extern char lbl_8049DBF0[];
extern char lbl_804A4FC4[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F840[8];
extern void *lbl_80563F24;
void *igObjectPropertyForModelViewMatrixBoneSelect_getMeta();
void *igObjectPropertyForModelViewMatrixBoneSelect_vtableRead();
void fn_8013CFFC();
void igObjectPropertyForModelViewMatrixBoneSelect_register();
void *igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall();
}
struct UnknownGenRoot8013CF30 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013CF30(){fn_8006665C(this);}
};
struct UnknownGenObject8013CF30_0 : UnknownGenRoot8013CF30 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013CF30_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013CF30_1 : UnknownGenObject8013CF30_0 {
 inline ~UnknownGenObject8013CF30_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013CF30 : UnknownGenObject8013CF30_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013CF30(){unknown00=lbl_804A4FC4;}
};
extern "C" {
void *igObjectPropertyForModelViewMatrixBoneSelect_getMeta(){
 if(!lbl_80563F24 || !(reinterpret_cast<unsigned int *>(lbl_80563F24)[0x24/4]&4)) fn_8013CFFC();
 return lbl_80563F24;
}
void *igObjectPropertyForModelViewMatrixBoneSelect_vtableRead(){
 UnknownGenObject8013CF30 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A4FC4;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013CFFC(){
 fn_80066188((int)igObjectPropertyForModelViewMatrixBoneSelect_register);
}
void igObjectPropertyForModelViewMatrixBoneSelect_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F24,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall,(int)lbl_8049DBF0,44,(int)igObjectPropertyForModelViewMatrixBoneSelect_vtableRead,(int)fn_8013D0B8,0,(int)lbl_8055F840);
}
void *igObjectPropertyForModelViewMatrixBoneSelect_getMetaCall(){return igObjectPropertyForModelViewMatrixBoneSelect_getMeta();}
}
#pragma pop
