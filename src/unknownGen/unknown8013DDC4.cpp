#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8006665C(void *);
void fn_8012FC48();
void *fn_8013BF68();
void fn_8013DF88();
void igObjectPropertyForNode_register();
extern char lbl_8049DCCC[];
extern char lbl_804A533C[];
extern char lbl_804A5BE8[];
extern char lbl_804A5C7C[];
extern char lbl_804A6338[];
extern char lbl_804A6460[];
extern char lbl_804AAF48[];
extern char lbl_8055F870[8];
extern void *lbl_80563F54;
void *igObjectPropertyForGeometry_getMeta();
void *igObjectPropertyForGeometry_vtableRead();
void fn_8013DECC();
void igObjectPropertyForGeometry_register();
void *igObjectPropertyForGeometry_getMetaCall();
}
struct UnknownGenRoot8013DE00 {
 void *unknown00;
 inline void operator delete(void *){}
 inline UnknownGenRoot8013DE00(){fn_8006665C(this);}
};
struct UnknownGenObject8013DE00_0 : UnknownGenRoot8013DE00 {
 char unknown04[28];
 UnknownGenRefMember unknown20;
 inline ~UnknownGenObject8013DE00_0(){unknown00=lbl_804A5C7C;}
};
struct UnknownGenObject8013DE00_1 : UnknownGenObject8013DE00_0 {
 inline ~UnknownGenObject8013DE00_1(){unknown00=lbl_804A5BE8;}
};
struct UnknownGenObject8013DE00 : UnknownGenObject8013DE00_1 {
 char unknown24[12];
 inline ~UnknownGenObject8013DE00(){unknown00=lbl_804A533C;}
};
extern "C" {
void *igObjectPropertyForGeometry_getMeta(){
 if(!lbl_80563F54 || !(reinterpret_cast<unsigned int *>(lbl_80563F54)[0x24/4]&4)) fn_8013DECC();
 return lbl_80563F54;
}
void *igObjectPropertyForGeometry_vtableRead(){
 UnknownGenObject8013DE00 object;
 object.unknown00=lbl_804A6460;
 object.unknown00=lbl_804AAF48;
 object.unknown00=lbl_804A6338;
 object.unknown00=lbl_804A5C7C;
 object.unknown20.value=0;
 object.unknown00=lbl_804A5BE8;
 object.unknown00=lbl_804A533C;
 return *reinterpret_cast<void **>(reinterpret_cast<char *>(&object)+reinterpret_cast<int *>(Gap::Core::_arkCore)[0x394/4]);
}
void fn_8013DECC(){
 fn_80066188((int)igObjectPropertyForGeometry_register);
}
void igObjectPropertyForGeometry_register(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_80563F54,(int)igObjectPropertyForNode_register,(int)fn_8013BF68,(int)igObjectPropertyForGeometry_getMetaCall,(int)lbl_8049DCCC,44,(int)igObjectPropertyForGeometry_vtableRead,(int)fn_8013DF88,0,(int)lbl_8055F870);
}
void *igObjectPropertyForGeometry_getMetaCall(){return igObjectPropertyForGeometry_getMeta();}
}
#pragma pop
